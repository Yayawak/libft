#include "../../../includes/ft_printf.h"

size_t handle_c(va_list argp)
{
    ft_putchar_fd(va_arg(argp, int), 1);
    return (1);
}

size_t  handle_s(va_list argp)
{
    char    *s;

    // ! argp is not shifted
    s = va_arg(argp, char *);
    // ft_putstr_fd(s, 1);
    printf("%s", s);
    // return (ft_strlen(s));
    return (5);

}

static size_t    interpret(va_list argp, const char type)
{
    size_t len;
    // va_list argp_cpy;

    // va_copy(argp_cpy, argp);

    // printf("\'pointer to argp cpy : %p\'\n", argp_cpy);
    // len = 0;
    // if (type == 'c')
    //     len += handle_c(argp_cpy);
    // else if (type == 's')
    //     len += handle_s(argp_cpy);
    // return (len);

    printf("\'pointer to argp : %p\'\n", argp);
    len = 0;
    if (type == 'c')
        len += handle_c(argp);
    else if (type == 's')
        len += handle_s(argp);
    return (len);
    // printf("ssss %s ssssss\n", va_arg(argp, char *));
    // return (9);
}

int ft_printf(const char *format, ...)
{
    va_list argp;
    int     len;

    len = 0;
    va_start(argp, format);
    ft_putstr_fd((char *)format, 1);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            interpret(argp, *format);
        }
        else {
            ft_putchar_fd(*format, 1);
            len++;
        }
        format++;
    }
    va_end(argp);

    return (len);
}

int main()
{
    // ft_printf("hello world%c\n", 'k', '5');
    // ft_printf("my name is %s, i want to say %s\n", "haha", "SIPSIP");
    ft_printf("my name is %c, i want to say %s\n", 'k', "SIPSIP");
    // ft_printf("hello world %c \n", '9', "kk");
    // ft_printf("hello world %c\t:number is %d \n", '9', -125);
    // ft_printf( "%c, %c, %c\n", '1', '9', '5');
    // ft_printf( "%c, %c, %c\n", '3', '9', '5');
    // ft_printf(
    //     // "hello world\n\t character is %c\n\t:number is %d\n\t:string %s \n",
    //     "char : %c\n\t num : %d\n\t str : %s \n",
    //      '9',
    //     -125,
    //     "string stranger things"
    // );
    // printf("----------------------------------------");
    // printf("hello world%c\n", '9', "kk");

    return (0);
}
