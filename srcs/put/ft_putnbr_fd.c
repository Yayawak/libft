#include "../../includes/libft.h"
/* #include <fcntl.h> */

void    fn_putnbr_fd(int n, int fd)
{
    /* ft_putstr_fd(ft_itoa(n), fd); */
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }

    if (n >= 10)
        fn_putnbr_fd(n / 10, fd);

    ft_putchar_fd(n % 10 + '0', fd);
}

/* int main() */
/* { */
/*     int fd = open("output.txt", O_WRONLY); */
/*     fn_putnbr_fd(-98765, fd); */
/* } */
