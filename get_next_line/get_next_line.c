#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

// read() attempts to read nbyte bytes of data from the object referenced by the descriptor fildes into the buffer
//      pointed to by buf
// RETURN VALUES
//      If successful, the number of bytes actually read is returned.  Upon reading end-of-file, zero is returned.
//      Otherwise, a -1 is returned and the global variable errno is set to indicate the error.
// static char    BUF[50];
#ifndef BUFFER_SIZE
#define BUFFER_SIZE 50
#endif

static char *stash;
// char *stash;

void    read_file(int fd, char *buff)
// char    *read_file(int fd, char *buff)
{
    ssize_t sz;

    if (fd < 0 || read(fd, 0, 0) < 0 || BUFFER_SIZE <= 0)
        return ;
    sz = 1;
    while (sz > 0)
    {
        sz = read(fd, buff, BUFFER_SIZE);
        // sz = read(fd, buff, 1);
        // sz = read(fd, buff, 5);
        // if eof
        if (sz == -1)
        {
            free(stash);
            return ;
        }

        stash = ft_strjoin(stash, buff);
        // todo ? if found \n -> end ? ret line "NO \n in read di"
        printf("%s\n", stash);
        // if ()
        // stash = ft_strjoin("a", "kk");
        // printf("%s\n", stash);
        // printf("%s\n", buff);
    }
    printf("------------------\n");
    printf("stash...\n");
    printf("%s\n", stash);
    printf("------------------\n");
    // stash = 0;
}

void    clear_stash()
{
    // todo : scan in stash -> if found \n -> clear before \n -> only remain
}

char    *get_line()
{
    char    *created_line;
    size_t  len;
    int     i;

    // len = ft_strchr(stash, '\n') - stash;
    len = (int)(ft_strchr(stash, '\n') - stash);
    i = 0;
    // created_line = major(x)
    // created_line = malloc(sizeof(char) * (len + 1));
    if (created_line == NULL)
    {
        free(stash);
        return (NULL);
    }
    // created_line[len] = '\n';
    // while (--len >= 0)
    // printf("stash before get_line\n");
    // printf("... -> %s\n", stash);
    while (i < len)
    {
        created_line[i] = stash[i];
        i++;
    }
    // {
    //     printf("%zu\n", len);
    // }
    // created_line[i] = '\n';
    created_line[i] = 0;

    printf("len %zu\n", len);
    // printf("crated line is : %s\n", created_line);
// return (created_line);
    return (created_line);
}

char    *get_next_line(int fd)
{
    char    buff[BUFFER_SIZE];
    char    *line;

    stash = "";
    read_file(fd, buff);
    line = get_line();

    printf("crated line is : %s\n", line); // corercted
    return (line);
}

int main(void)
{
    int fd;

    fd = open("dummy.txt", O_RDONLY);
    // printf("get_next_line : %s\n", get_next_line(fd));
    char    *s;

    s = get_next_line(fd);
    printf("get_next_line : %s\n", s);
}
