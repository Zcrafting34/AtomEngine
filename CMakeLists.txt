cmake_minimum_required(VERSION 3.10)

project(AtomEngine)

set(CMAKE_CXX_STANDARD 11)

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)

include_directories(${SDL2_INCLUDE_DIRS} ${SDL2_IMAGE_INCLUDE_DIRS})

add_executable(AtomEngine
                src/main.cpp
                src/core/Window.cpp)

target_link_libraries(AtomEngine ${SDL2_LIBRARIES} SDL2_image ${SDL2_IMAGE_LIBRARIES})
