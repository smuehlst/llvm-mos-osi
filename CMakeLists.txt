cmake_minimum_required(VERSION 3.15)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

set(LLVM_MOS_PLATFORM osi-c1p)
find_package(llvm-mos-sdk REQUIRED)

find_program(SREC_CAT srec_cat REQUIRED)
set(CMAKE_SREC_CAT ${SREC_CAT} CACHE FILEPATH "")

include(osi-target)

project(llvm-mos-osi-c1p)

add_subdirectory(minimal)
add_subdirectory(minimal-cpp)
