cmake_minimum_required(VERSION 3.10)
project(PingPong VERSION 1.0)
include(/home/zhero/projects/vcpkg/scripts/buildsystems/vcpkg.cmake)
# packages
find_package(SDL2 CONFIG REQUIRED)
find_package(SDL2_image CONFIG REQUIRED)

# variables

# executable
add_executable(PingPong src/main.c)

# include-link
target_include_directories(PingPong PUBLIC include/)
target_link_libraries(PingPong
    PRIVATE
    $<TARGET_NAME_IF_EXISTS:sdl2::SDL2main>
    $<IF:$<TARGET_EXISTS:SDL2::SDL2>,SDL2::SDL2,SDL2::SDL2-static>
    )
target_link_libraries(PingPong PRIVATE $<IF:$<TARGET_EXISTS:SDL2_image::SDL2_image>,SDL2_image::SDL2_image,SDL2_image::SDL2_image-static>)