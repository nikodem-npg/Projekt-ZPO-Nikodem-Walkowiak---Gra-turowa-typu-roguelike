cmake_minimum_required(VERSION 3.10)

project(GraRoguelike VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Automatyczne pobieranie frameworka Catch2
include(FetchContent)
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.5.2
)
FetchContent_MakeAvailable(Catch2)

# Włączamy obsługę testów w CMake
enable_testing()

# Tworzymy osobny program tylko do testów
add_executable(testy tests/test.cpp)
target_include_directories(testy PRIVATE src)
target_link_libraries(testy PRIVATE Catch2::Catch2WithMain)
add_test(NAME TestyJednostkowe COMMAND testy)

set(SOURCE_FILES
    src/main.cpp
    #pliki źródłowe
)
set(HEADER_FILES
    #pliki nagłówkowe
)
add_executable(roguelike ${SOURCE_FILES} ${HEADER_FILES})