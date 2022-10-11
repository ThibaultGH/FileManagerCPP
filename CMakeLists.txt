cmake_minimum_required(VERSION 3.24.2)

project(FileManagerC++)

add_library(FileManagerCPP FileManagerCPP.cpp)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} FileManagerCPP)
