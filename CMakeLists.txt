cmake_minimum_required(VERSION 3.12)

project(cpplen)

# 工具
aux_source_directory(./utils utilsSrc)

# 可变参数
aux_source_directory(./args_access argsAccessSrc)

# 内存
aux_source_directory(./memory memorySrc)

# 目录
aux_source_directory(./dir dirSrc)

# 文件
aux_source_directory(./test_io testIoSrc)

# 字符串
aux_source_directory(./strs strsSrc)

#设置编译器的源字符集以及目标程序字符集都为utf-8
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/source-charset:utf-8>")
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/execution-charset:utf-8>")

#第三方库
include_directories(./includes)
link_directories(./libs)

add_executable(
    main 
    main.cpp 
    ${utilsSrc} 
    ${argsAccessSrc} 
    ${memorySrc}
    ${dirSrc} 
    ${testIoSrc}
    ${strsSrc}
    ${yamlSrc}
 )

#  target_link_libraries(main yaml-cppd)