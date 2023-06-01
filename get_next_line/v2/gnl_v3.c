#include "get_next_line.h"
#include <stddef.h>

static t_q  *q;

void    read_file(int fd)
{
    char    *buff;
    ssize_t readed_size;

    readed_size = 1;
    // while (readed_size != 0)
    // while (!is_nl_in_head(q) && readed_size != 0)
    while (!is_nl_in_rear(q) && readed_size != 0)
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
        dup_buf_to_q(buff, readed_size);
        free(buff);
    }

}

void    dup_buf_to_q(char *buff, int readed_size)
{
    char    *content;
    t_node  *new;
    size_t  i;

    content = malloc(sizeof(char) * (readed_size + 1));
    new = new_node(content);
    i = 0;
    // printf
    int k = 0;
    if (buff != NULL)
        // printf("buff ...\n%s\n", buff);
        // printf("buff : %s\n", buff);
    {
        // while (buff[k] != 0)
        while (k < readed_size)
        {
            if (buff[k] == '\n')
                printf("\\n");
            else
                printf("%c", buff[k]);
            k++;
        }

    }
    printf("\n");
    // rs = 12
    // while (buff[i] && i < readed_size)
    // while (i < readed_size)
    while (i < readed_size)
    {
        new->content[i] = buff[i];
        i++;
    }
    new->content[i] = 0;
    if (q == NULL)
        q = init_q(new);
    else
        enq(q, new);
    // display_q(q);
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
            {
                return ;
            }
            (*line)[j_line++] = cur->content[i_qcnt++];
        }
        cur = cur->next;
    }

}
//     // (*line)[j_line] = '\0'; // already done in alloc
// }
// void    get_line_from_q(char **line)
// {
//     size_t  i_qcnt; // j for q_content
//     size_t  j_line;
//     t_node  *cur;
//     if (q == NULL)
//         return ;
//     allocline(line, q);
//     if (*line == NULL)
//         return ;

//     j_line = 0;
//     cur = q->head;
//     while (cur)
//     {
//         i_qcnt = 0;
//         while (cur->content[i_qcnt])
//         {
//             if (cur->content[i_qcnt] == '\n')
//             {
//                 // ! for clear queue if i dont want to manage leak
//                 // cur->next->content = cur->content[i_qcnt];
//                 // cur->next->content = &(cur->content[i_qcnt]);
//                 // cur->next->content = &(cur->content[i_qcnt]);
//                 // q->head = cur->next;
//                 // int r = 0;
//                 // int r = i_qcnt + 1;
//                 // while (cur->content[r] != 0)
//                 // while (cur->content[r] != '\0')
//                 i_qcnt++;
//                 // while (cur->content[i_qcnt] != '\n')
//                 while (cur->content[i_qcnt] && cur->content[i_qcnt] != '\n')
//                 {
//                     // (*line)[j_line++] = cur->content[r++];
//                     (*line)[j_line++] = cur->content[i_qcnt++];
//                     // break;
//                     // r++;
//                 }
//                 // q->head = deq(q);
//                 // q->head = cur->next;
//                 q->head = cur;
//                 // printf("HHH : %s\n", &(cur->content[i_qcnt + 1]));
//                 // printf("HHH : %c\n", (cur->content[i_qcnt]));
//                 // printf("HHH : %c\n", (cur->content[i_qcnt + 1]));
//                 // t_node *remain = new_node(&(cur->content[i_qcnt + 1]));
//                 // enq(q, remain);
//                 // q->head = remain;
//                 // if (q->head)
//                 // {
//                 //     // q->head->content = &(cur->content[i_qcnt]);
//                 //     q->head->content = &(cur->content[i_qcnt + 1]);
//                 //     // if (*(q->head->content) == '\n')
//                 //     // {
//                 //     //     q->head = cur->next;

//                 //     // }
//                 //     printf("CT : %s\n", q->head->content);
//                 // }
//                 // cur->next->content = (cur->content[i_qcnt]);
//                 // q->head = cur->next;
//                 // break;
//                 // clear_q(cur->next);
//                 // clear
//                 // goto exit_loop;
//                 // break ;
//                 return ;
//             }
//             (*line)[j_line++] = cur->content[i_qcnt++];
//         }
//         // if (cur->next)
//         cur = cur->next;
//     }
//     // exit_loop:
//     // {
//     // clear_q(cur->next);
//     // clear_q(cur);

//     // }
//     // (*line)[j_line] = '\0'; // already done in alloc
// }

// void    get_line_from_q(char **line)
// {
//     size_t  i_qcnt; // j for q_content
//     size_t  j_line;
//     t_node  *cur;
//     if (q == NULL)
//         return ;
//     allocline(line, q);
//     if (*line == NULL)
//         return ;

//     j_line = 0;
//     cur = q->head;
//     while (cur)
//     {
//         i_qcnt = 0;
//         while (cur->content[i_qcnt])
//         {
//             if (cur->content[i_qcnt] == '\n')
//             {
//                 // (*line)[j_line++] = '\n'; // already done in alloc
//                 // break;
//                 // ! for clear queue if i dont want to manage leak
//                 // cur->next->content = cur->content[i_qcnt];
//                 // cur->next->content = &(cur->content[i_qcnt]);
//                 // cur->next->content = &(cur->content[i_qcnt]);
//                 q->head = cur->next;
//                 q->head->content = &(cur->content[i_qcnt]);
//                 // cur->next->content = (cur->content[i_qcnt]);
//                 // q->head = cur->next;
//                 // break;
//                 // clear_q(cur->next);
//                 // clear
//                 // goto exit_loop;
//                 // break ;
//                 return ;
//             }
//             (*line)[j_line++] = cur->content[i_qcnt++];
//         }
//         // if (cur->next)
//         cur = cur->next;
//     }
//     // exit_loop:
//     // {
//     // clear_q(cur->next);
//     // clear_q(cur);

//     // }
//     // (*line)[j_line] = '\0'; // already done in alloc
// }

// void    get_line_from_q(char **line)
// {
//     t_node  *head;
//     size_t  i;
//     size_t  line_idx;

//     if (q == NULL)
//         return ;
//     allocline(line, q);
//     if (*line == NULL)
//         return ;
//     // printf("HEAD OF s is : %s\n", q->head->content);
//     head = deq(q);
//     line_idx = 0;
//     while (head)
//     {
//         i = 0;
//         while (head->content[i])
//         // while (*(head->content))
//         // while (head->content)
//         {
//             // (*line)[line_idx++] = head->content[i++];
//             if (head->content[i] == '\n')
//             // if (*(head->content) == '\n')
//             {
//                 // q->head = head->next;
//                 // if (q->head)
//                 // {
//                 //     i++;
//                 //     while (q->head->content[i] && q->head->content[i] != '\n')
//                 //     {
//                 //         (*line)[line_idx++] = head->content[i++];
//                 //         // i++;
//                 //     }
//                 //     q->head = deq(q);
//                 //     // q->head = head->next;
//                 //     // q->head->content = &(head->content[i + 1]);
//                 //     // q->head = head->next;
//                 //     // q->head = head->next;
//                 // }
//                 // return ;
//             }
//             (*line)[line_idx++] = head->content[i++];
//         }
//         head = deq(q);
//     }
// }

// void    clear_q()
void    clear_q()
{
    t_node  *head;
    size_t  i;
    t_node  *remain;
    size_t  j;

    if (q == NULL)
        return ;
    // head = deq(q);
    head = q->head;
    i = 0;
    while (head->content[i] && head->content[i] != '\n')
        i++;
    if (head->content && head->content[i] == '\n')
    // if (head->content[i] && head->content[i] == '\n')
        i++;
    printf("len of REMAIN size : %zu\n",
        (ft_strlen(head->content) - i + 1)
    );
    remain = new_node(
        malloc(sizeof(char) * (ft_strlen(head->content) - i + 1))
    );
    j = 0;
    while (head->content[i])
        remain->content[j++] = head->content[i++];
    remain->content[j] = 0;
    // remain->next = q->head->next;

    // if (remain[])
    // q->head = remain;
    // deq(q)->next =
    // remain->next = deq(q)->next;
    // head = deq(q)->next;
    // head = deq(q)->next;

    // q->head = q->head->next;
    // printf("RM : %s\n", remain->content);
    // remain->next = q->head->next;
    // q->head = remain;
    // q->head = head;
    // q->head = remain;
}
// void    clear_q(t_node *restart_node)
// {
//     t_node  *nxt;

//     // display_q(q);
//     while (q->head != restart_node)
//     {
//         nxt = q->head->next;
//         free(q->head);
//         q->head = nxt;
//     }
// }


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

    clear_q();
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
