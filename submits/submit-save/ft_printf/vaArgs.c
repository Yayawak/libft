#include "../../../includes/ft_printf.h"

static void    nest(va_list args)
{
    printf("%s\n", va_arg(args, char *));
    printf("%s\n", va_arg(args, char *));
    printf("%s\n", va_arg(args, char *));
}

static void    charArgs(const char *format, ...)
{
    va_list args;

    va_start(args, format);
    // for (int i = 0; i < 2; i++)
    // {
    //     nest(args);
    // }
    nest(args);
    va_end(args);
}

// int main(void)
// {
//     charArgs("AAA", "BBB", "CCC");
// }
