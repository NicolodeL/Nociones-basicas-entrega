cmake_minimum_required(VERSION 3.26)
project(Entorno_de_desarrollo_y_archivo_CMakeLists_txt)

set(CMAKE_CXX_STANDARD 17)

add_executable(Entorno_de_desarrollo_y_archivo_CMakeLists_txt main.cpp funciones.cpp funciones.h nuevo.cpp
        )
include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        7.1.3
)

FetchContent_MakeAvailable(fmt)
add_library(funciones STATIC funciones.cpp)
target_link_libraries( Entorno_de_desarrollo_y_archivo_CMakeLists_txt PRIVATE funciones)