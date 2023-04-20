#include <stdio.h>

unsigned    ft_strlen(const char *str)
{
    unsigned    len;

    len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return (len);
}

/* char *  ft_strrchr(const char *s, int c) */
/* { */
/*     unsigned int    i; */
/*     const char      *init; */

/*     init = s; */
/*     i = ft_strlen(s); */
/*     s = (s + i); // Why ? */

/*     while (c != *s && *s != *init) */
/*     { */
/*         s--; */
/*         if (c == *s) */
/*             return ((char *)s); */
/*     } */
/*     return (0); */
/* } */

char *  ft_strrchr(const char *s, int c)
{
    unsigned int    i;

    i = ft_strlen(s) - 1;

    while (i >= 0)
    {
        if (s[i] == c)
        {
            /* printf("index found : %d", i); */
            return ((char *)s);
        }
        i--;
    }
    return (0);
}

int main()
{
    /* char*   str = "You must write your funcion impolementatin"; */
    char*   str = "You Funk";
    char    c = 'F';
    printf("str : %s\nsearch char : %c\nlocation index : %p",
            str,
            c,
            ft_strrchr(str, c)
        ) ;
}
