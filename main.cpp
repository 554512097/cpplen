#include <iostream>
#include "args_access/args.h"

using namespace std;

int main(int argc, char const *argv[], char **envp)
{
    cout << "main start ..." << endl;
    test();
    return 0;
}
