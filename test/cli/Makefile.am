# Executables paths passed to test scripts
DATAPATH = ../../data
THIS_DIR = $(top_srcdir)/test/cli
EXEPATH = ../../src
PROJEXE = $(EXEPATH)/proj
CS2CSEXE = $(EXEPATH)/cs2cs
PROJINFOEXE = $(EXEPATH)/projinfo

# PROJ.4 test scripts
TEST27 = $(THIS_DIR)/test27
TEST83 = $(THIS_DIR)/test83
TESTNTV2 = $(THIS_DIR)/testntv2
TESTVARIOUS = $(THIS_DIR)/testvarious
TESTFLAKY = $(THIS_DIR)/testflaky
TESTDATUMFILE = $(THIS_DIR)/testdatumfile
TESTIGN = $(THIS_DIR)/testIGNF
TESTPROJINFO = $(THIS_DIR)/testprojinfo

EXTRA_DIST = pj_out27.dist pj_out83.dist td_out.dist \
		test27 test83 tv_out.dist tf_out.dist \
		testflaky testvarious testdatumfile testntv2 ntv2_out.dist \
		testIGNF proj_outIGNF.dist \
		testprojinfo testprojinfo_out.dist \
		CMakeLists.txt

testprojinfo-check:
	PROJ_LIB=$(DATAPATH) $(TESTPROJINFO) $(PROJINFOEXE)

test27-check:
	$(TEST27) $(PROJEXE)

test83-check:
	$(TEST83) $(PROJEXE)

testvarious-check:
	PROJ_LIB=$(DATAPATH) $(TESTVARIOUS) $(CS2CSEXE)

testdatumfile-check:
	@if [ -f $(DATAPATH)/conus -a -f $(DATAPATH)/ntv1_can.dat -a -f $(DATAPATH)/MD -a -f $(DATAPATH)/ntf_r93.dat ]; then \
	  PROJ_LIB=$(DATAPATH) $(TESTDATUMFILE) $(CS2CSEXE) ; \
	fi

testign-check:
	@if [ -f $(DATAPATH)/ntf_r93.gsb ] ; then \
	  PROJ_LIB=$(DATAPATH) $(TESTIGN) $(CS2CSEXE) ; \
	fi

testntv2-check:
	@if [ -f $(DATAPATH)/ntv2_0.gsb ] ; then \
	  PROJ_LIB=$(DATAPATH) $(TESTNTV2) $(CS2CSEXE) ; \
	fi

check-local: testprojinfo-check test27-check test83-check testvarious-check testdatumfile-check testign-check testntv2-check
