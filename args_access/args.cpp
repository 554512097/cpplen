#include "args.h"
#include <stdarg.h>
#include <stdio.h>

/// 通过制定可变参数数量
/// 参阅https://zhuanlan.zhihu.com/p/106545495
/// 参阅https://blog.csdn.net/longintchar/article/details/85490103
/// @brief 测试可变参数
/// @param prefix 打印的前缀
/// @param suffix 打印的后缀
/// @param count 可变参数的数量
/// @param 可变参数
void print_valist_by_num(const char *prefix, const char *suffix, int count, ...)
{
    printf(prefix);
    va_list argptr;
    // 通过最后一个不可变参数的位置，确定可变参数起始位置
    va_start(argptr, count);

    for (size_t i = 0; i < count; i++)
    {
        // 因为提前知道可变参数的类型为int，直接传递int类型
        int arg = va_arg(argptr, int);
        printf(" %d", arg);
    }

    va_end(argptr);
    printf(" %s\n", suffix);
}

/// @brief 通过添加结束标记位，此例为-1
/// @param prefix 打印的前缀
/// @param suffix 打印的后缀
/// @param 可变参数
void print_valist_by_flag(const char *prefix, const char *suffix, ...)
{
    printf(prefix);
    // 创建可变参数指针
    va_list ap;
    // 通过最后一个不可变参数的位置，确定可变参数起始位置
    va_start(ap, suffix);

    while (*ap != -1) // 还没有到结束标记位，继续访问
    {
        int arg = va_arg(ap, int);
        printf(" %d", arg);
    }

    va_end(ap);
    printf(" %s\n", suffix);
}

void test_args()
{
    printf("print_valist_by_num");
    print_valist_by_num("[", "]", 6, 1, 3, 4, 5, 2, 1);
    print_valist_by_num("[", "]", 5, 5, 6, 1, 3, 2);

    printf("print_valist_by_flag");
    print_valist_by_flag("[", "]", 6, 1, 3, 4, -1);
    print_valist_by_flag("[", "]", 8, 1, 2, 3, 4, 4, -1);
}
