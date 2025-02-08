rm -rf build
cmake -S . -B build -DCMAKE_TOOLCHAIN_FILE=cmake/armv8-rpi3-linux-gnueabihf.cmake -DCROSS_COMPILE_SYSROOT=/home/andrewc/chroots/rpi-buster-armhf
cmake --build build -j$(nproc)
scp build/MDR_Severance pi@192.168.0.219:~/MDR/
scp -r /home/andrewc/ProjectFiles/MDRSeverance/MDRSeverance/cmake-build-debug/assets/ pi@192.168.0.219:~/MDR/
