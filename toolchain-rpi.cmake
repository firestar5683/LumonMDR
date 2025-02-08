set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR arm)

# Define the cross-compiler
set(CMAKE_C_COMPILER   /usr/bin/arm-linux-gnueabihf-gcc)
set(CMAKE_CXX_COMPILER /usr/bin/arm-linux-gnueabihf-g++)

# Architecture flags
set(CMAKE_C_FLAGS "-mfpu=neon -mfloat-abi=hard -march=armv7-a" CACHE STRING "" FORCE)
set(CMAKE_CXX_FLAGS "-mfpu=neon -mfloat-abi=hard -march=armv7-a" CACHE STRING "" FORCE)

# sysroot path
set(CMAKE_SYSROOT /usr/arm-linux-gnueabihf)

# Library and include paths
set(CMAKE_FIND_ROOT_PATH /usr/arm-linux-gnueabihf)
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)