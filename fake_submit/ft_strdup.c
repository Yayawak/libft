#include "../../includes/libft.h"

char    *ft_strdup(const char *s1)
{
    size_t  len;
    char    *dup;

    len = ft_strlen(s1) + 1;
    printf("len of %zu\n", len);
    dup = (char *)malloc(len * sizeof(char));

    if (dup == NULL)
        return (NULL);

    while (*s1)
        *dup++ = *s1++;
    *dup = '\0';

    return (dup - len + 1);
}

/* int main() */
/* { */
/*     char*   s = "Library Functions Manual"; */
/*     char*   k = ft_strdup(s); */

/*     printf("original s = %s\n", s); */
/*     printf("duplicated  k = %s\n", k); */
/* } */
