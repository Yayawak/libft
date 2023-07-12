#include "get_next_line.h"

char    *get_line(char *st)
{
    int i;
    char    *s;

    i = 0;
    if (!st[i])
        return (NULL);
    while (st[i] && st[i] != '\n')
        i++;
    s = (char *)malloc(sizeof(char) * (i + 2));
    if (!s)
        return (NULL);
    i = 0;
    while (st[i] && st[i] != '\n')
    {
        s[i] = st[i];
        i++;
    }
    if (st[i] == '\n')
    {
        s[i] = '\n';
        i++;
    }
    s[i] = 0;
    return (s);
}

char    *new_stash(char *st)
{
    int i;
    int j;
    char    *new_st;

    i = 0;
    while (st[i] && st[i] != '\n')
        i++;
    if (!st[i])
    {
        free(st);
        return (NULL);
    }
    new_st = (char *)malloc(sizeof(char) * (ft_strlen(st) - i + 1));
    if (!new_st)
        return (NULL);
    i++;
    j = 0;
    while (st[i])
        new_st[j++] = st[i++];
    new_st[j] = 0;
    free(st);
    return (new_st);
}

char    *read_file(int fd, char *st)
{
    char    *buff;
    ssize_t readed;

    buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (!buff)
        return (NULL);
    readed = 1;
    while (!ft_strchr(st, '\n') && readed != 0)
    {
        readed = read(fd, buff, BUFFER_SIZE);
        if (readed == -1)
        {
            free(buff);
            return (NULL);
        }
        buff[readed] = 0;
        st = ft_strjoin(st, buff);
    }
    free(buff);
    return (st);
}

char    *get_next_line(int fd)
{
    char    *line;
    static char *stash;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (0);
    stash = read_file(fd, stash);
    if (!stash)
    {
        return (NULL);
    }
    line = get_line(stash);
    stash = new_stash(stash);

    return (line);
}

// int main(void)
// {
//     int fd;

//     fd = open("dummy.txt", O_RDONLY);

//     printf("%s\n", get_next_line(fd));
//     printf("%s\n", get_next_line(fd));
//     printf("%s\n", get_next_line(fd));
//     printf("%s\n", get_next_line(fd));
//     printf("%s\n", get_next_line(fd));
//     printf("%s\n", get_next_line(fd));
//     printf("%s\n", get_next_line(fd));
//     printf("%s\n", get_next_line(fd));


//     close(fd);

//     return (0);
// }
