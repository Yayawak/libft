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

// const t_node	*peek(t_q *q);
// const t_node	*peek(t_node *node);
void	enq(t_q *q, t_node *new_node);
t_node	*deq(t_q *q);
t_node	*ft_lstnew(void *content);
t_node	*new_node(char *content);
// t_q	    *init_q();
t_q	    *init_q(t_node *head);
void	display_q(t_q	*q);
void    get_line_from_q(char **line);
void    allocline(char **line, t_q *q);
// void    clear_q(t_node *restart_node);
int	is_nl_in_head(t_q *q);
int	is_nl_in_rear(t_q *q);
// void    dup_buf_to_q(char *buff, int readed_size);
void    dup_buf_to_q(char *buff, int start_idx, int readed_size);
size_t  ft_strlen(const char *s);
// void    clear_q(t_q *q);
// void    clear_q();

#endif
