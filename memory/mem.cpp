#include "mem.h"
#include <memory.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

/// @brief memcpy函数将src的前size个字节复制到dest
void test_memcopy()
{
    cout << "test_memcopy" << endl;
    char *src = "this is copy str";
    size_t size = strlen(src);
    char *dest = (char *)malloc(size);
    char *result = (char *)memcpy(dest, src, size - 5);
    cout << "src:" << src << endl;
    cout << "dest:" << dest << endl;
    cout << "result:" << result << endl;
    free(dest);
}

/// @brief void *memccpy(
///          void *dest,
///          const void *src,
///          int c,
///          size_t count
///         );
/// memccpy函数将src的前size个字节复制到dest，但是会匹配结束字符c，如果匹配到则返回c后的字符指针，否则返回NULL
void test_memccopy(int c, size_t minus)
{
    cout << "test_memccopy" << endl;
    char *src = "this is copy(C) str";
    size_t size = strlen(src);
    char *dest = (char *)malloc(size);
    char *result = (char *)memccpy(dest, src, c, size - minus);
    cout << "src:" << src << endl;
    cout << "dest:" << dest << endl;
    if (result != NULL)
    {
        printf("result pointer:%p\n", result);
        cout << "result:" << result << endl;
    }

    free(dest);
}

void test_memchr()
{
    char *buffer = "test_memchar";
    cout << "source Str: " << buffer << endl;
    char *result = (char *)memchr(buffer, 'a', strlen(buffer));
    if (result != NULL)
    {
        cout << "result: " << result << endl;
    }
    else
    {
        cout << "no match!" << endl;
    }
}

void test_memory()
{
//     test_memcopy();

//     test_memccopy('C', 10);
//     test_memccopy('C', 1);
//     test_memccopy('D', 1);

    test_memchr();
}