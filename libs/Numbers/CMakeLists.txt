add_library(Numbers
        Number.h
        NumberGrid.cpp NumberGrid.h
)

target_include_directories(Numbers PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_SOURCE_DIR}/external/perlin-noise
)