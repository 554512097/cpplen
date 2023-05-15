cmake_minimum_required(VERSION 3.12)

project(cpplen)

include_directories(./args_access)
aux_source_directory(./args_access argsAccessSrc)

add_executable(main main.cpp ${argsAccessSrc})