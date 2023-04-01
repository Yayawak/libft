#include "../../includes/libft.h"

char*   ft_strchr(const char *s, int c)
{
    while (*s != c && *s != '\0')
        s++;
    /* if (c == *s) */
    /*     return ((char *)s); */
    return ((char *)s);
}

int main()
{
    char* str = "Templar hanami";

    char    c = 'p';
    char* p = ft_strchr(str, c);
    printf("pointer of %c in string %s = %p\n",
            c,
            str,
            p);
    puts(p);
    return (0);
}
