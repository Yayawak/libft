#ifndef LIBFT_H
# define LIBFT_H


# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <string.h>


int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_isprint(int c);

int ft_tolower(int c);
int ft_toupper(int c);


char *  ft_strchr(const char *s, int c);
size_t  ft_strlen(const char *s);
size_t  ft_strlcat(char* dst, const char* src, size_t dstsize);

#endif
