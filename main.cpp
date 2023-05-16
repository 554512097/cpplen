#include <iostream>
#include "args_access/args.h"
#include "memory/mem.h"
#include "dir/dirs.h"

using namespace std;

int main(int argc, char const *argv[], char **envp)
{
    cout << "main start ..." << endl;
    // test_args();

    // test_memory();

    test_dirs();
    return 0;
}
