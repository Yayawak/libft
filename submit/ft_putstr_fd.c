#include "libft.h"
// #include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	size_t len;

	len = ft_strlen(s);
	write(fd, s, len);
}
/* { */
/*     int fd = open("output.txt", O_WRONLY); */
/*     printf("%d\n", fd); */
/*     ft_putstr_fd("strint string sprint spronk", fd); */
/*     return 0; */
/* } */
