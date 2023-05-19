#include "utils.h"
#include "stdarg.h"
#include "stdlib.h"
#include <iostream>

using namespace std;

char *join(int size, ...)
{
    char **strs = (char **)malloc(size * sizeof(&size));
    va_list ap;
    va_start(ap, size);
    int totalSize = 0;
    for (size_t i = 0; i < size; i++)
    {
        strs[i] = va_arg(ap, char *);
        totalSize += strlen(strs[i]);
    }
    cout << "total size:" << totalSize << endl;

    char *result = (char *)malloc(totalSize + 1);
    for (size_t i = 0; i < size; i++)
    {
        strcat(result, strs[i]);
    }
    return result;
}