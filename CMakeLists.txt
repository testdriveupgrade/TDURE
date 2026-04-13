
# testrec - ReXGlue Recompiled Project
#
# This file is yours to edit. 'rexglue migrate' will NOT overwrite it.
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(testrec LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(generated/rexglue.cmake)

# Sources
set(TESTREC_SOURCES
    src/main.cpp
)

if(WIN32)
    add_executable(testrec WIN32 ${TESTREC_SOURCES})
else()
    add_executable(testrec ${TESTREC_SOURCES})
endif()

rexglue_setup_target(testrec)
