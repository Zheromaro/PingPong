cmake_minimum_required(VERSION 3.10)
project(PingPong VERSION 1.0)

# variables
aux_source_directory(src SRC_FILES)
set(FMOD_PATH ${CMAKE_CURRENT_SOURCE_DIR}/libs/fmod)
set(FMOD_INCLUDE ${FMOD_PATH}/include)
file(GLOB FMOD_LIB "${FMOD_PATH}/lib/*.so")
message(WARNING " : ${FMOD_LIB}")


# add packages, lib, assets
find_package(SDL2 CONFIG REQUIRED)
find_package(SDL2_image CONFIG REQUIRED)
find_package(SDL2_ttf CONFIG REQUIRED)
file(COPY "${CMAKE_CURRENT_SOURCE_DIR}/assets" DESTINATION "${CMAKE_BINARY_DIR}")

# executable
add_executable(PingPong ${SRC_FILES})

# include && link
target_link_libraries(PingPong
PRIVATE
$<TARGET_NAME_IF_EXISTS:sdl2::SDL2main>
$<IF:$<TARGET_EXISTS:SDL2::SDL2>,SDL2::SDL2,SDL2::SDL2-static>
)
target_link_libraries(PingPong PRIVATE $<IF:$<TARGET_EXISTS:SDL2_image::SDL2_image>,SDL2_image::SDL2_image,SDL2_image::SDL2_image-static>)
target_link_libraries(PingPong PRIVATE $<IF:$<TARGET_EXISTS:SDL2_ttf::SDL2_ttf>,SDL2_ttf::SDL2_ttf,SDL2_ttf::SDL2_ttf-static>)

target_link_libraries(PingPong PUBLIC ${FMOD_LIB})
target_include_directories(PingPong PUBLIC ${FMOD_INCLUDE})

target_include_directories(PingPong PUBLIC include/)