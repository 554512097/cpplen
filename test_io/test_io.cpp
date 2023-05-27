#include "test_io.h"
#include <io.h>
#include <stdio.h>
#include <direct.h>
#include <string.h>
#include <stdlib.h>
#include "../utils/utils.h"

void test_io()
{
    char *path = getcwd(NULL, 0);
    char *fileName = "\\CMakeLists.txt";
    strcat(path, fileName);

    // char * filePath = "F:\\study\\c\\cpplen\\CMakeLists.txt";
    printf("filePath:%s\n", path);
    FILE *f = fopen(path, "r");
    if (f == NULL)
    {
        printf("open failed\n");
        return;
    }
    int fileNo = fileno(f);
    printf("file no is: %d\n", fileNo);
    long fileSize = _filelength(fileNo);
    printf("file size is: %d\n", fileSize);

    int bufferSize = 1024;
    char *buffer = (char *)malloc(bufferSize);
    while (!feof(f))
    {
        printf(fgets(buffer, bufferSize, f));
    }
    
    printf("\n");

    int result = fclose(f);
    printf("file close result: %d", result);
}