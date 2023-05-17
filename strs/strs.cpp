#include "strs.h"
#include "string.h"
#include "stdio.h"
#include "stdlib.h"

void test_strcat()
{
    char *str1 = "hello";
    char *str2 = "world";
    char *dest = (char *)malloc(strlen(str1) + strlen(str2) - 1);
    dest = strcpy(dest, str1);
    printf("result dest: %s\n", dest);
    dest = strcat(dest, str2);
    printf("result dest: %s\n", dest);
}

void test_strs()
{
    test_strcat();
}