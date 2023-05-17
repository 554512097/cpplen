#include "utils.h"
#include "stdarg.h"

char *join(int size, ...)
{
    va_list ap;
    va_start(ap, size);
    for (size_t i = 0; i < size; i++)
    {
        char *str = va_arg(ap, char *);
    }

    return nullptr;
}