#include "args.h"
#include <stdarg.h>
#include <stdio.h>

/// 参阅https://zhuanlan.zhihu.com/p/106545495
/// @brief 测试可变参数
/// @param prefix 打印的前缀
/// @param suffix 打印的后缀
/// @param 可变参数
void testVarArgs(const char *prefix, const char *suffix, ...)
{
    printf(prefix);
    va_list argptr;
    // 确定最后一个不可变参数的位置
    va_start(argptr, suffix);
    // 此处判断最后一个可变参数不妥
    while (*argptr)
    {
        // 因为提前知道可变参数的类型为int，直接传递int类型
        int va = va_arg(argptr, int);
        printf(" %d\n", va);
    }

    va_end(argptr);
    printf(suffix);
}

void testVarArg2(const char *prefix, const char *suffix, ...)
{
}

void test()
{
    testVarArgs("[", "]", 1, 3, 4, 5, 2, 1);
}
