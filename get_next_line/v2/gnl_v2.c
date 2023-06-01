// void
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

// char    *get_next_line(int fd)
// {
//     char    *line;

//     return line;
// }

char    **stash = NULL;

char    *gl(int fd)
{
    char    *buf;
    size_t  buf_size;
    ssize_t readed_size;
    char    *line;

    buf_size = 100;

    // stash = malloc(sizeof(char) * (1000 + 1));
    // stash = calloc(sizeof(char) * (1000 + 1));

    // buf = calloc(sizeof(char), (buf_size + 1));
    // buf[buf_size] = '\0';

    // int j = 0;
    // // int k = 0;
    // int n_nl = 0;
    // int     *linelen = malloc(4);
    // int     *prev_linelen = malloc(4);
    // while (readed_size != 0)
    // {
    //     // int k = 0;
    //     readed_size =  read(fd, buf, 1);
    //     char    *nl;
    //     nl = ft_strchr(buf, '\n');
    //     if (nl != NULL)
    //     {
    //         // *prev_linelen = j;
    //         // stash[n_nl] = malloc(sizeof())
    //         // *stash
    //         n_nl++;
    //         // stash[j] = buf[j];
    //         // k = 0;
    //     }
    //     // k++;
    //     j++;
    // }
    // int[][] arrOf
    // ft_chr
    buf = calloc(sizeof(char), (buf_size + 1));
    buf[buf_size] = '\0';
    readed_size =  read(fd, buf, buf_size);
    int i = 0;
    int lines_count = 0;
    while (buf[i])
    {
        if (buf[i] == '\n')
            lines_count++;
        i++;
    }
    // stash = malloc(sizeof(char *) * (lines_count + 1));
    stash = malloc(sizeof(char *) * (lines_count));
    int  word_count = 0;
    i = 0;
    while (*stash != NULL)
    {
        while (buf[i])
        {
            if (buf[i] == '\n')
            {
                *stash = malloc(sizeof(char) * word_count);
                word_count = 0;
            }
            word_count++;
        }
        // buf
        *stash = malloc(sizeof(char) * word_count);
        stash++;
    }
    printf("lines count = %d\n", lines_count);

    printf("buf is %s\n", buf);

    // readed_size =  read(fd, buf, buf_size);
    printf("rs is %zu\n", readed_size);

    // // todo : copy from buff to stash
    // int i = 0;
    // // while (buf[i] && i < readed_size)
    // while (i < readed_size)
    // {
    //     stash[i] = buf[i];
    //     i++;
    // }
    // // stash[i] = 0;
    // // ! bug
    // // stash[0] = 0;
    // // stash = NULL;

    // printf("stash data is : %s\n", stash);

    // //todo : get line
    // i = 0;
    // while (stash[i] != '\n')
    //     i++;
    // i++; // for \n
    // line = malloc(sizeof(char) * (i + 1));

    // i = 0;
    // while (stash[i] != '\n')
    // {
    //     line[i] = stash[i];
    //     i++;
    // }
    // line[i] = '\n';
    // // line[i + 1] = '\0';
    // line[i++] = '\0';
    // printf("line is : %s\n", line);

    // // todo : clear stash
    // stash += i;
    // printf("stash data is : %s\n", stash);
    // printf("==============================\n");

    return line;
}

int main()
{
    // rs = 12
    // line = calloc(sizeof(char), readed_size);
    int fd = open("dummy.txt", O_RDONLY);
    // stash = calloc(sizeof(char), (1000 + 1));
    // stash =
    // stash[1000] = '\0';

    // printf("line is : %s\n", gl(fd));
    gl(fd);
    // gl(fd);
    // gl(fd);
    // printf("line is : %s\n", gl(fd));






    // // char    *s = "Hello\\nYYYY";
    // char    *s = "HelloYYYY";
    // printf("ptr of s is %p\n", s);
    // // printf("ptr of \\n is %p\n", ft_strchr(s, 'Y'));
    // printf("ptr of Y is %p\n", ft_strchr(s, 'Y'));
}

