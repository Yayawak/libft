#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

// read() attempts to read nbyte bytes of data from the object referenced by the descriptor fildes into the buffer
//      pointed to by buf
// RETURN VALUES
//      If successful, the number of bytes actually read is returned.  Upon reading end-of-file, zero is returned.
//      Otherwise, a -1 is returned and the global variable errno is set to indicate the error.
// static char    BUF[50];

static t_list *stash = NULL;

char    *get_next_line(int fd)
{
    char    *line;

    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &line, 0) < 0)
		return (NULL);
    line = NULL;
    read_file(fd);
    if (stash == NULL)
        return (NULL);
    get_line(&line);
    clear_stash();

    if (line[0] == '\0')
    {
        // ? free stash
        stash = NULL;
        free(line);
        return (NULL);
    }
    printf("created line is : %s\n", line); // corercted
    printf("--------------------\n");
    return (line);
}

void    read_file(int fd)
{
    char    *buff;
    ssize_t readed_size;

    readed_size = 1;
    while (!is_nl_in_lstlast(stash) && readed_size != 0)
    {
        buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
        if (buff == NULL)
            return ;
        readed_size = read(fd, buff, BUFFER_SIZE);
        printf("readed size is : %zu\n", readed_size);
        // if err Or eof
        if (readed_size == -1 || (stash == NULL && readed_size == 0))
        {
            free(buff);
            return ;
        }
        // ? prevent outof segment
        buff[readed_size] = '\0';
        // rs = 15
        append_stash(buff, readed_size);
        free(buff);
    }
}

// buff size = 15, rs = 12
void    append_stash(char *buff, int readed_size)
{
    int     i;
    t_list  *new;
    char    *content;

    content = malloc(sizeof(char) * (readed_size + 1));
    new = ft_lstnew(content);
    i = 0;
    // rs = 12
    while (buff[i] && i < readed_size)
    {
        new->content[i] = buff[i];
        i++;
    }
    new->content[i] = '\0';
    if (stash == NULL)
        stash = new;
    else
        ft_lst_get_last(stash)->next = new;
}

// void get_line(char  **line)
// {
//     int i;
//     int j;

//     // printf("p of stash : %p\n", stash);
//     if (stash == NULL)
//         return ;
//     // printf("here\n");
//     allocline_bystash(line, stash);
//     // printf("p of line %p\n", *line);
//     if (*line == NULL)
//         return ;
//     j = 0;
//     while (stash)
//     {
//         i = 0;
//         while (stash->content[i])
//         {
//             if (stash->content[i] == '\n')
//             {
//                 (*line)[j++] = '\n';
//                 break ;
//             }
//             (*line)[j++] = stash->content[i++];
//         }
//         // ! bug -> if we set stash to null -> the next command after get_line (clear_stash) will cannot see stash
//         // so it's will no correctly clear some content of stash -> but its will point to NULL which cause error
//         if (stash->next)
//             stash = stash->next;
//         else
//             break ;
//     }
//     (*line)[j] = '\0';
// }
void get_line(char  **line)
{
    int i;
    int j;
    t_list *cur_node;

    // printf("p of stash : %p\n", stash);
    if (stash == NULL)
        return ;
    // printf("here\n");
    allocline_bystash(line, stash);
    // printf("p of line %p\n", *line);
    if (*line == NULL)
        return ;
    j = 0;
    cur_node = stash;
    while (cur_node)
    {
        i = 0;
        while (cur_node->content[i])
        {
            if (cur_node->content[i] == '\n')
            {
                (*line)[j++] = '\n';
                break ;
            }
            (*line)[j++] = cur_node->content[i++];
        }
        // ! bug -> if we set stash to null -> the next command after get_line (clear_stash) will cannot see stash
        // so it's will no correctly clear some content of stash -> but its will point to NULL which cause error
        cur_node = cur_node->next;
    }
    (*line)[j] = '\0';
}

// ! bug exist here that make stash = NULL should not occured
void    clear_stash()
{
    t_list  *new_stash;
    t_list  *last;
    int     i;
    int     j;

    if (stash == NULL)
        return ;
    last = ft_lst_get_last(stash);
    i = 0;
    while (last->content[i] && last->content[i] != '\n')
        i++;
    // ! for what ??????????????
    if (last->content && last->content[i] == '\n')
        i++;
    // i++;
    printf("len of new_stash size : %zu\n",
        (ft_strlen(last->content) - i + 1)
    );
    // allcate for remaining chars
    new_stash = ft_lstnew(
        malloc(sizeof(char) *
        // ? full word - word before \n
        (ft_strlen(last->content) - i + 1)));
    j = 0;
    while (last->content[i])
        new_stash->content[j++] = last->content[i++];
    new_stash->content[j] = '\0';
    free_stash(stash);
    stash = new_stash;
}


int main(void)
{
    int fd;
    char    *s;

    // fd = 1;
    fd = open("dummy.txt", O_RDONLY);
    // fd = open("dummy.txt", );
    // fd = 3;
    printf("fd is : %d\n", fd);
    // printf("get_next_line : %s\n", get_next_line(fd));

    // s = get_next_line(fd);
    // s = get_next_line(fd);
    // s = get_next_line(fd);
    printf("fd : %d\n", fd);
    get_next_line(fd);
    get_next_line(fd);
    // get_next_line(1);
    // get_next_line(fd);
    // get_next_line(fd);
    // get_next_line(fd);
    // get_next_line(fd);
    // get_next_line(fd);
    // get_next_line(fd);
    // get_next_line(fd);
    // get_next_line(fd);
    // get_next_line(fd);
    // printf("s : %s\n", s);
    // printf("get_next_line : %s\n", s);
}
