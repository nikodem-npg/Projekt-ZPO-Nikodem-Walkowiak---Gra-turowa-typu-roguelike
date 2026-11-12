cmake_minimum_required(VERSION 3.10)

projekt(GraRoguelike VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(SOURCE_FILES
    src/main.cpp
    #pliki źródłowe
)
set(HEADER_FILES
    #pliki nagłówkowe
)
add_executable(roguelike ${SOURCE_FILES} ${HEADER_FILES})