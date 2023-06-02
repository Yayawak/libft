#ifndef GNL
# define GNL

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 150
#endif

typedef struct  s_node
{
    char            *content;
    struct s_node   *next;
} t_node;
typedef struct s_queue {
    t_node  *head;
    t_node  *rear;
} t_q;

void	enq(t_q *q, t_node *new_node);
t_node	*deq(t_q *q);
t_node	*new_node(char *content);
t_q	    *init_q(t_node *head);
void	display_q(t_q	*q);
void    get_line_from_q(char **line);
void    allocline(char **line, t_q *q);
// void    clear_q(t_node *restart_node);
// int	is_nl_in_head(t_q *q);
// int	is_nl_in_rear(t_q *q);
// void    dup_buf_to_q(char *buff, int readed_size);
void    dup_buf_to_q(char *buff, int readed_size);
size_t  ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char    *c2s(char c);
void    special_print(char *s);
void    reshape_q();
void	freenode(t_node *n);

#endif
