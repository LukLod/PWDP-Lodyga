cmake_minimum_required(VERSION 3.16)

project(zadania LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(zadanie1 zad1.cpp)
add_executable(zadanie2 zad2.cpp)
add_executable(zadanie3 zad3.cpp)
add_executable(zadanie4 zad4.cpp)
add_executable(zadanie5 zad5.cpp)
add_executable(zadanie6 zad6.cpp)

include(GNUInstallDirs)
install(TARGETS zadanie1
    TARGETS zadanie2
    TARGETS zadanie3
    TARGETS zadanie4
    TARGETS zadanie5
    TARGETS zadanie6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
