cmake_minimum_required(VERSION 3.15)

set(LLVM_MOS_PLATFORM osi-c1p)
find_package(llvm-mos-sdk REQUIRED)
project(llvm-mos-osi-c1p-minimal)

add_subdirectory(minimal)
add_subdirectory(minimal-cpp)
