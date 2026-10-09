cmake_minimum_required(VERSION 3.21)
option(FORMAT_VALIDATION_ONLY "Configure formatting without compilers or native dependencies" OFF)
if(FORMAT_VALIDATION_ONLY)
    project(FormatValidation LANGUAGES NONE)
    include(cmake/FormatValidation.cmake)
    return()
endif()
include(cmake/Metamod.cmake)
project(asext LANGUAGES C CXX)
if(NOT CMAKE_CONFIGURATION_TYPES AND NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release CACHE STRING "Build configuration" FORCE)
endif()
include("${METAMOD_SOURCE_PATH}/cmake/SDK.cmake")
mmfg_configure_install_layout()
include(cmake/SDK.cmake)

add_library(asext SHARED
    src/dllapi.cpp
    src/engine_api.cpp
    src/h_export.cpp
    src/meta_api.cpp
    src/server_hook.cpp
)
mmfg_configure_target(asext)
target_link_libraries(asext PRIVATE ASExt::SDK)
if(WIN32)
    target_sources(asext PRIVATE src/dllmain.cpp)
    target_compile_definitions(asext PRIVATE ASEXT_EXPORTS)
endif()

include(cmake/FormatValidation.cmake)
