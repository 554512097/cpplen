#include "test_io.h"
#include <io.h>
#include <stdio.h>
#include <direct.h>
#include <string.h>
#include <stdlib.h>

void test_io()
{
    char *baseDir = getcwd(NULL, 0);
    char *fileName = "CMakeLists.txt";
    char *filePath = (char *)malloc(strlen(baseDir) + strlen(fileName) - 1);
    fileName = strcat(fileName, baseDir);
    if (fileName == NULL)
    {
        printf("file not exist!");
    }
    printf("filename: %s\n", fileName);
    FILE *f = fopen(fileName, "r");
    int fileNo = fileno(f);
    printf("file no is: %d\n", fileNo);
    long fileSize = _filelength(fileNo);
    printf("file size is: %d\n", fileSize);
}