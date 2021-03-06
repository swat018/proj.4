.. _differences:

================================================================================
Known differences between versions
================================================================================

Once in a while, a new version of PROJ causes changes in the existing behaviour.
In this section we track deliberate changes to PROJ that break from previous
behaviour. Most times that will be caused by a bug fix. Unfortunately, some bugs
have existed for so long that their faulty behaviour is relied upon by software
that uses PROJ.

Behavioural changes caused by new bugs are not tracked here, as they should be
fixed in later versions of PROJ.

Version 4.6.0
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

The default datum application behavior changed with the 4.6.0 release. PROJ
will now only apply a datum shift if both the source and destination coordinate
system have valid datum shift information.

The PROJ 4.6.0 Release Notes states

    MAJOR: Rework :c:func:`pj_transform()` to avoid applying ellipsoid to ellipsoid
    transformations as a datum shift when no datum info is available.


Version 5.0.0
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

Longitude wrapping when using custom central meridian
-------------------------------------------------------------------------------

By default PROJ wraps output longitudes in the range -180 to 180. Previous to
PROJ 5, this was handled incorrectly when a custom central meridian was set with
:option:`+lon_0`. This caused a change in sign on the resulting easting as seen
below::

    $ proj +proj=merc +lon_0=110
    -70 0
    -20037508.34    0.00
    290 0
    20037508.34     0.00

From PROJ 5 on onwards, the same input now results in same coordinates, as seen
from the example below where PROJ 5 is used::

    $ proj +proj=merc +lon_0=110
    -70 0
    -20037508.34    0.00
    290 0
    -20037508.34    0.00

The change is made on the basis that :math:`\lambda=290^{\circ}` is a full
rotation of the circle larger than :math:`\lambda=-70^{\circ}` and hence
should return the same output for both.

Adding the ``+over`` flag to the projection definition provides
the old behaviour.

Version 6.0.0
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

Removal of proj_def.dat
-----------------------

Before PROJ 6, the proj_def.dat was used to provide general and per-projection
parameters, when +no_defs was not specified. It has now been removed. In case,
no ellipsoid or datum specification is provided in the PROJ string, the
default ellipsoid is GRS80 (was WGS84 in previous PROJ versions).
