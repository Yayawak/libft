#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
// for utils -> malloc
#include <stdlib.h>
// ssize_t -> error size indicator
#include <sys/types.h>
// read
#include <unistd.h>

char    *get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *s, int c);

#endif
