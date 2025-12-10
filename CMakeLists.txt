cmake_minimum_required(VERSION 4.1)
project(perudo VERSION 1.0)


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY lib)

file(COPY images DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/bin/)

add_subdirectory(./libs/raylib)


add_executable(${PROJECT_NAME}
    ./src/main.cpp
    ./src/core.cpp
    ./src/game.cpp
)

target_compile_options(${PROJECT_NAME} PRIVATE -static)
target_include_directories(${PROJECT_NAME} PRIVATE ./include)
target_link_libraries(${PROJECT_NAME} PRIVATE raylib)