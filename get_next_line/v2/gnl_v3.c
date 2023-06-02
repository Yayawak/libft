#include "get_next_line.h"
#include <stddef.h>
#include <string.h>

static t_q  *q;

void    read_file(int fd)
{
    char    *buff;
    ssize_t readed_size;

    readed_size = 1;
    while (readed_size != 0)
    // while (!is_nl_in_head(q) && readed_size != 0)
    // while (!is_nl_in_rear(q) && readed_size != 0)
    {
        buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
        if (buff == NULL)
            return ;
        readed_size = read(fd, buff, BUFFER_SIZE);
        printf("readed size is : %zu\n", (size_t)readed_size);

        // error of read size occcur when ??
        if (readed_size == -1 || (q == NULL && readed_size == 0))
        {
            free(buff);
            return ;
        }
        buff[readed_size] = '\0';
        // printf("buff ...\n%s\n", buff);
        dup_buf_to_q(buff, 0, readed_size);
        free(buff);
    }

}

// void    dup_buf_to_q(char *buff, int readed_size)
// void    dup_buf_to_q(char *buff, int start_idx, int readed_size)
void    special_print(char *s)
{
    int i = 0;

    // while (s[i])
    // {
    //     if (s[i] == '\n')
    //         printf("\\n");
    //     else
    //         printf("%c", s[i]);
    //     i++;
    // }
    while (*s)
    {
        if (*s == '\n')
            printf("\\n");
        else
            printf("%c", *s);
        s++;
    }
    printf("\n");

}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	char	*joiner;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	joiner = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
	if (joiner == NULL)
		return (NULL);
	joiner[l1 + l2] = '\0';
	while (l2-- > 0)
		joiner[l1 + l2] = s2[l2];
	while (l1-- > 0)
		joiner[l1] = s1[l1];
	return (joiner);
}

char    *c2s(char c)
{
    char    *s;
    s = malloc(sizeof(char) * 2);
    s[0] = c;
    s[1] = 0;
    return s;
}

void    reshape_q()
{
    t_node  *cur;
    t_q     *new_q;
    int i;
    char    *new_cnt;

    cur = q->head;
    // cur = deq(q);
    // new_q = init_q(new_node(""));
    // new_q = init_q(new_node(new_cnt));
    // new_q = init_q(new_node(""));
    // display_q(q);
    new_q = NULL;
    new_cnt = "";
    while (cur)
    // while (cur->next)
    {
        i = 0;
        while (cur->content[i])
        {
            new_cnt = ft_strjoin(new_cnt, c2s(cur->content[i]));
            // if (cur->content[i] == '\n')
            // special_print(new_cnt);
            // if (cur->content[i] == '\n' || cur->content[i] == 0)
            if (cur->content[i] == '\n')
            {
                printf("found'\\n'\n");
                if (new_q == NULL)
                    new_q = init_q(new_node(new_cnt));
                else
                    enq(new_q, new_node(new_cnt));
                new_cnt = "";
            }
            i++;
            // special_print(new_cnt);
            // special_print(new_cnt);
        }
        // printf("cur->content = %s\n", cur->content);
        cur = cur->next;
        // cur = deq(q);
    }
    display_q(new_q);
    // printf("new q -> H 1 = %s\n", new_q->head->content);
    // if (new_q && new_q->rear)
    //     printf("new q -> Rear 1 = %s\n", new_q->rear->content);
}

void    dup_buf_to_q(char *buff, int i, int readed_size)
{
    char    *content;
    t_node  *new;

    content = malloc(sizeof(char) * (readed_size + 1));
    new = new_node(content);
    int k = 0;
    while (i < readed_size)
    {
        new->content[i] = buff[i];
        i++;
    }
    if (q == NULL)
        q = init_q(new);
    else
        enq(q, new);
}


void    get_line_from_q(char **line)
{
    size_t  i_qcnt; // j for q_content
    size_t  j_line;
    t_node  *cur;


    if (q == NULL)
        return ;
    allocline(line, q);
    if (*line == NULL)
        return ;

    j_line = 0;
    cur = q->head;
    while (cur)
    {
        i_qcnt = 0;
        while (cur->content[i_qcnt])
        {
            if (cur->content[i_qcnt] == '\n')
                return ;
            (*line)[j_line++] = cur->content[i_qcnt++];
        }
        cur = cur->next;
    }
}



char    *get_next_line(fd)
{
    char    *line;

    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &line, 0) < 0)
        return (NULL);
    // line = "default line.";
    read_file(fd);
    // if (q == NULL)
    //     return (NULL);
    get_line_from_q(&line);

    reshape_q();
    // reshape_q();
    // display_q(q);
    // clear_q();
    // if (line[0] == '\0')
    // {
    //     q = NULL;
    //     free(line);
    //     return (NULL);
    // }
    printf("created line is : %s", line);
    return line;
}

int main(void)
{
    int fd;

    // q = NULL;
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
