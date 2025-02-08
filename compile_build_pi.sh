rm -rf build
cmake -S . -B build -DCMAKE_TOOLCHAIN_FILE=cmake/armv8-rpi3-linux-gnueabihf.cmake -DCROSS_COMPILE_SYSROOT=/home/andrewc/chroots/rpi-buster-armhf
cmake --build build -j$(nproc)
