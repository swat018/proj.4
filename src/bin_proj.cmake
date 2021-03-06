set(PROJ_SRC apps/proj.cpp 
             apps/gen_cheb.cpp 
             apps/p_series.cpp
             apps/emess.cpp
)

source_group("Source Files\\Bin" FILES ${PROJ_SRC})

#Executable
add_executable(binproj ${PROJ_SRC})
set_target_properties(binproj
    PROPERTIES
    OUTPUT_NAME proj)
target_link_libraries(binproj ${PROJ_LIBRARIES})
install(TARGETS binproj 
        RUNTIME DESTINATION ${BINDIR})

if(MSVC AND BUILD_LIBPROJ_SHARED)
    target_compile_definitions(binproj PRIVATE PROJ_MSVC_DLL_IMPORT=1)
endif()
