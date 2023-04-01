#include "../../includes/libft.h"
/* #in */

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    if (n == 0)
        return (0);
    i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0')
    {
        if (i < (n - 1))
        /* if (i < n) */
            i++;
        else
            return (0);
            /* return (s1 - s2); */
        /* s1++; */
        /* s2++; */
    }
    return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}

int main()
{
    char    *s1 = "comPare";
    char    *s2 = "compare";

    printf("s1 : %s\ns2 : %s\ndiff : %d",
            s1,
            s2,
            ft_strncmp(s1, s2, 5)
            );
}
