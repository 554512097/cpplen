#include <iostream>
#include "args_access/args.h"
#include "memory/mem.h"
#include "dir/dirs.h"
#include "test_io/test_io.h"
#include "strs/strs.h"
#include <stdalign.h>
#include "utils/utils.h"
#include "test_yaml/test_yaml.h"

using namespace std;

int main(int argc, char const *argv[], char **envp)
{
    // test_args();

    // test_memory();

    // test_dirs();

    // test_io();

    // test_strs();

    test_yaml();
    return 0;
}
