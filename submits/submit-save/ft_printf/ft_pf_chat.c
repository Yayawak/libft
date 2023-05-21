// #include <stdarg.h>
// #include <unistd.h>
#include "../../../includes/ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    int count = 0;

    while (*format)
    {
        if (*format == '%')
        {
            format++;

            if (*format == 'c')
                // count += ft_putchar_fd(va_arg(args, int), 1);
                ft_putchar_fd(va_arg(args, int), 1);
            else if (*format == 's')
                // count += ft_putstr_fd(va_arg(args, char *), 1);
                ft_putstr_fd(va_arg(args, char *), 1);
            else if (*format == 'd' || *format == 'i')
                // count += ft_putnbr_fd(va_arg(args, int), 1);
                ft_putnbr_fd(va_arg(args, int), 1);
            else
                // count += ft_putchar_fd(*format, 1);
                ft_putchar_fd(*format, 1);
        }
        else
        {
            ft_putchar_fd(*format, 1);
            // count += ft_putchar(*format);

        }

        format++;
    }

    va_end(args);

    return count;
}

int main()
{
    ft_printf("Hello, %s! The answer is %d.\n", "World", 42);
    return 0;
}
