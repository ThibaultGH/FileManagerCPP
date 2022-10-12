cmake_minimum_required(VERSION 3.24.2)

project(FileManagerC++)

add_library(FileManagerCPP src/FileManagerCPP.cpp)

target_link_libraries(${PROJECT_NAME} FileManagerCPP)
