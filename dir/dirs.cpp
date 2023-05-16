#include "dirs.h"
#include <direct.h>
#include <iostream>
#include <stdlib.h>

void test_getcwd()
{
    char *buffer;
    // char *buffer = (char *)malloc(200);
    // printf("before buffer ptr: %p\n", buffer);
    // 获取当前工作目录
    // 此种方式可以自动返回一个字符串
    buffer = _getcwd(NULL, 0);
    // buffer = _getcwd(buffer, 200);
    if (buffer == NULL)
        perror("getcwd error");
    else
    {
        printf("%s \nLength: %zu\n", buffer, strlen(buffer));
        printf("after buffer ptr: %p\n", buffer);
        free(buffer);
    }
}

void test_dirs()
{
    test_getcwd();
}