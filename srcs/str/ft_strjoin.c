#include "../../includes/libft.h"

char *  ft_strjoin(char const *s1, char const *s2)
{
    size_t  l1;
    size_t  l2;
    size_t  i;
    char *  joiner;

    l1 = ft_strlen(s1);
    l2 = ft_strlen(s2);
    joiner = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
    if (joiner == NULL)
        return (NULL);
    i = -1;
    while (++i < l1 + l2)
        if (i < l1)
            joiner[i] = s1[i];
        else
            joiner[i] = s2[i - l1];
    joiner[i] = '\0';
    return (joiner);
}

int main()
{
    char *  s1 = "Euler circuit";
    char *  s2 = "Halmilton circuit";

    char *  p = ft_strjoin(s1, s2);
    printf("s1 : %s\n", s1);
    printf("s2 : %s\n", s2);
    printf("res : %s\n", p);
}
