#include <iostream>
#include "args_access/args.h"
#include "memory/mem.h"
#include "dir/dirs.h"
#include "test_io/test_io.h"
#include "strs/strs.h"
#include <stdalign.h>

typedef struct
{
    int value;
    alignas(32) char alignedMemory[32];
} cacheFriendly;

typedef struct
{
    char a;
    int c;
    short b;
    char d[14];
} struct1;

using namespace std;

int main(int argc, char const *argv[], char **envp)
{
    cout << "main start ..." << endl;

    printf("sizeof(cacheFriendly): %d\n", sizeof(cacheFriendly));
    printf("alignof(cacheFriendly): %d\n", alignof(cacheFriendly));

    printf("struct1 : %d\n", sizeof(struct1));

    // test_args();

    // test_memory();

    // test_dirs();

    // test_io();

    // test_strs();
    return 0;
}
