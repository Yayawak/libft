#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
// for utils -> malloc
#include <stdlib.h>
// ssize_t -> error size indicator
#include <sys/types.h>
// read
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 150
#endif

// char    *get_next_line(int fd);
// char	*ft_strjoin(char const *s1, char const *s2);
// size_t	ft_strlen(const char *str);
// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
// char	*ft_strchr(const char *s, int c);

// int     is_nl_in_lstlast(t_list *stash);
// // int     is_nl_in_list(t_list *stash);
// t_list  *ft_lst_get_last(t_list *stash);
// t_list	*ft_lstnew(char *content);
// void	allocline_bystash(char **line, t_list *stash);
// void	free_stash(t_list *stash);
// void    append_stash(char *buff, int readed_size);
// void    read_file(int fd);
// void    clear_stash();
// void    get_line(char  **line);

#endif
