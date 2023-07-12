#ifndef GNL
# define GNL

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#ifndef BUFFER_SIZE
#define BUFFER_SIZE 150
#endif

size_t  ft_strlen(char const *s);
// char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strjoin(char  *s1, char *s2);
// void    special_print(char *s);
char	*ft_strchr(char *s, int c);

#endif
