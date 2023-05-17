cmake_minimum_required(VERSION 3.12)

project(cpplen)

# 工具
include_directories(./utils)
aux_source_directory(./utils utilsSrc)

# 可变参数
include_directories(./args_access)
aux_source_directory(./args_access argsAccessSrc)

# 内存
include_directories(./memory)
aux_source_directory(./memory memorySrc)

# 目录
include_directories(./dir)
aux_source_directory(./dir dirSrc)

# 文件
include_directories(./test_io)
aux_source_directory(./test_io testIoSrc)

# 字符串
include_directories(./strs)
aux_source_directory(./strs strsSrc)

add_executable(
    main 
    main.cpp 
    ${utilsSrc} 
    ${argsAccessSrc} 
    ${memorySrc}
    ${dirSrc} 
    ${testIoSrc}
    ${strsSrc}
 )