#include "../../includes/libft.h"

char*   ft_strchr(const char *s, int c)
{
    /* while (*s != c && *s != '\0') */
    /*     s++; */
    /* /1* if (c == *s) *1/ */
    /* /1*     return ((char *)s); *1/ */
    /* return ((char *)s); */

    while (*s)
    {
        if (*s == (char)c)
            return (char *)s;
        s++;
    }
    if (*s == (char)c)
        return (char *)s;
    return (NULL);
}

/* int main() */
/* { */
/*     char* str = "Templar hanami"; */

/*     char    c = 'p'; */
/*     char* p = ft_strchr(str, c); */
/*     printf("pointer of %c in string %s = %p\n", */
/*             c, */
/*             str, */
/*             p); */
/*     puts(p); */
/*     return (0); */
/* } */
