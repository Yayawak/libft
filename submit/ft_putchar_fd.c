#include "../../includes/libft.h"
#include <fcntl.h>

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

/* int main() */
/* { */
/*     int fd; */

/*     fd = open("output.txt", O_WRONLY | O_CREAT, 0644); */
/*     ft_putchar_fd('a', fd); */
/*     close(fd); */
/*     /1* ft_putchar_fd('a', 1); *1/ */
/* } */
