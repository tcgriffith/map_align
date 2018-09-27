# Specify the minimum version for CMake

cmake_minimum_required(VERSION 2.8)




# Project's name

project(map_align)

set(CMAKE_BINARY_DIR ${CMAKE_HOME_DIRECTORY}/bin)

set(CMAKE_SOURCE_DIR ${CMAKE_HOME_DIRECTORY}/src)

set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

set(SRCPDB ${CMAKE_SOURCE_DIR}/PDB.cc  ${CMAKE_SOURCE_DIR}/pdb_utils.cc )

include_directories(${CMAKE_SOURCE_DIR})

add_executable(map_align ${CMAKE_SOURCE_DIR}/mapalign.cc )

add_executable(tester ${SRCPDB} ${CMAKE_SOURCE_DIR}/tester.cc)

add_executable(getmap ${SRCPDB} ${CMAKE_SOURCE_DIR}/getmap.cc )

# Disable in-source builds to prevent source tree corruption.
if(" ${CMAKE_SOURCE_DIR}" STREQUAL " ${CMAKE_BINARY_DIR}")
  message(FATAL_ERROR "
FATAL: In-source builds are not allowed.
       You should create a separate directory for build files.
")
endif()
