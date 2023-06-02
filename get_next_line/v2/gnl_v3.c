#include "get_next_line.h"
#include <stddef.h>
#include <string.h>

static t_q  *q;

void    read_file(int fd)
{
    char    *buff;
    ssize_t readed_size;

    readed_size = 1;
    // while (readed_size != 0)
    while (readed_size != 0)
    {
        buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
        if (buff == NULL)
            return ;
        readed_size = read(fd, buff, BUFFER_SIZE);
        // printf("readed size is : %zu\n", (size_t)readed_size);
        // error of read size occcur when ??
        if (readed_size == -1 || (q == NULL && readed_size == 0))
        {
            free(buff);
            return ;
        }
        // printf("buff : %s\n", buff);
        // special_print(buff);
        buff[readed_size] = '\0';
        dup_buf_to_q(buff, readed_size);
        free(buff);
    }
}

void    dup_buf_to_q(char *buff, int readed_size)
{
    char    *content;
    t_node  *new;
    int     i;

    i = -1;
    content = malloc(sizeof(char) * (readed_size + 1));
    if (content == NULL)
        return ;
    new = new_node(content);
    while (++i < readed_size)
        new->content[i] = buff[i];
    // printf("buff : %s\n", buff);
    if (q == NULL)
        q = init_q(new);
    else
        enq(q, new);
}

void    freeq(t_q *q2free)
{
    t_node  *cur;

    cur = deq(q2free);
    while (cur)
    {
        freenode(cur);
        cur = deq(q2free);
    }
    free(q2free);
}

void    reshape_q()
{
    t_node  *cur;
    t_q     *new_q;
    int i;
    char    *new_cnt;

    cur = q->head;
    new_q = NULL;
    new_cnt = "";
    while (cur)
    {
        i = 0;
        while (cur->content[i])
        {
            new_cnt = ft_strjoin(new_cnt, c2s(cur->content[i]));
            if (cur->content[i] == '\n')
            {
                if (new_q == NULL)
                    new_q = init_q(new_node(new_cnt));
                else
                    enq(new_q, new_node(new_cnt));
                new_cnt = "";
            }
            i++;
        }
        cur = cur->next;
    }
    freeq(q);
    q = new_q;
    // display_q(new_q);
}

void    get_line_from_q(char **line)
{
    int i;

    // ! bug maybe here q points to NULL but still accessable ?
    if (q == NULL)
    {
        *line = "";
        return ;
    }
    allocline(line, q);
    if (*line == NULL)
        return ;

    i = -1;
    // printf("line line line : %s\n", q->head->content);
    while (q->head->content[++i] != '\n')
    {
        (*line)[i] = q->head->content[i];
    }
    (*line)[i] = '\n';
    (*line)[i + 1] = 0;
    // printf("line line line : %s\n", *line);
    freenode(deq(q));
}

char    *get_next_line(fd)
{
    char    *line;

    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &line, 0) < 0)
        return (NULL);
    read_file(fd);

    if (q && q->head)
    {
        reshape_q();
    }
    get_line_from_q(&line);
    // display_q(q);
    printf("created line is : %s", line);
    return (line);
}

int main(void)
{
    int fd;

    fd = open("dummy.txt", O_RDONLY);
    get_next_line(fd);
    get_next_line(fd);
    get_next_line(fd);
    get_next_line(fd);
    get_next_line(fd);
    get_next_line(fd);
    get_next_line(fd);
    get_next_line(fd);
    get_next_line(fd);
    get_next_line(fd);
    get_next_line(fd);
    get_next_line(fd);

    return (0);
}
