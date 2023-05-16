#include <iostream>
#include "args_access/args.h"
#include "memory/mem.h"
#include "dir/dirs.h"
#include "test_io/test_io.h"

using namespace std;

int main(int argc, char const *argv[], char **envp)
{
    cout << "main start ..." << endl;
    // test_args();

    // test_memory();

    // test_dirs();

    test_io();
    return 0;
}
