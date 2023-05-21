#include "../../../includes/ft_printf.h"

// #include <stdarg.h>
// #include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void ft_putstr_fd(char *str, int fd)
{
    int len = 0;
    while (str[len])
        len++;
    write(fd, str, len);
}

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        ft_putstr_fd("-2147483648", fd);
        return;
    }

    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }

    if (n >= 10)
        ft_putnbr_fd(n / 10, fd);

    ft_putchar_fd(n % 10 + '0', fd);
}

void handle_char(va_list args, int fd)
{
    char c = va_arg(args, int);
    ft_putchar_fd(c, fd);
}

void handle_string(va_list args, int fd)
{
    char *str = va_arg(args, char *);
    ft_putstr_fd(str, fd);
}

void handle_integer(va_list args, int fd)
{
    int n = va_arg(args, int);
    ft_putnbr_fd(n, fd);
}

void handle_format_specifier(char format_specifier, va_list args, int fd)
{
    if (format_specifier == 'c')
        handle_char(args, fd);
    else if (format_specifier == 's')
        handle_string(args, fd);
    else if (format_specifier == 'd' || format_specifier == 'i')
        handle_integer(args, fd);
    else
        ft_putchar_fd(format_specifier, fd);
}

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
            handle_format_specifier(*format, args, 1);
        }
        else
        {
            ft_putchar_fd(*format, 1);
        }

        format++;
    }

    va_end(args);

    return count;
}

int main()
{
    ft_printf("my name is %s, i want to say %s\n", "haha", "SIPSIP");
    // ft_printf("Hello, %s! The answer is %d.\n", "World", 42);
    // ft_printf( "%c, %c, %c\n", '1', '9', '5');
    return 0;
}
