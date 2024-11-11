cmake_minimum_required(VERSION 3.2)
project(cArray)

# -----------------------------------------------------------------------------
# Set Variables
#
set(CMAKE_C_STANDARD 23)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(INCLUDE_DIRS "include")
set(BIN_NAME "cArray")
set(SRC_DIR "${PROJECT_SOURCE_DIR}/src")
set(CMAKE_C_FLAGS  "-Wall -fno-strict-aliasing")



# -----------------------------------------------------------------------------
# Set the project include directories.
#
include_directories(${INCLUDE_DIRS})


# -----------------------------------------------------------------------------
# Create the final binary
#
add_executable(${BIN_NAME} main.c "${PROJECT_SOURCE_DIR}/src/array.c")


# -----------------------------------------------------------------------------
# Build the Array Library
#
set(cArray "CArray")

add_library(${cArray} SHARED
  "${SRC_DIR}/array.c"
)


# -----------------------------------------------------------------------------
# Link the libraries
#
#target_link_libraries(${BIN_NAME} ${CIO_LIB})

target_link_libraries(${BIN_NAME} ${cArray})
