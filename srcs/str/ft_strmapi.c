#include "../../includes/libft.h"

char *  ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *  tmp;
    size_t  len;
    size_t  i;

    len = ft_strlen(s);
    i = -1;
    tmp = (char *)malloc(sizeof(char) * (len + 1));
    if (!tmp)
        return (NULL);
    while (++i < len)
    {
        tmp[i] = f(1, s[i]);
        /* tmp[i] = (*f)(1, s[i]); */
        printf("tmp[%zu] = %c\n", i, tmp[i]);
    }

    tmp[len] = '\0';
    return (tmp);
}

char    ceasarShift(unsigned int n, char c)
{
    return (c + n);
}

/* int main() */
/* { */
/*     char *  str = "biom under world"; */
/*     char *  new_str = ft_strmapi(str, ceasarShift); */
/*     printf("orginal = %s\n", str); */
/*     printf("modify  = %s\n", new_str); */
/* } */
