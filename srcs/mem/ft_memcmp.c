#include "../../includes/libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    unsigned char   *str1;
    unsigned char   *str2;

    i = 0;
    while (i < n)
    {
        str1 = (unsigned char *)s1;
        str2 = (unsigned char *)s2;

        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}

int main()
{
    char    *s1 = "decorator";
    /* char    *s2 = "decorator"; */
    char    *s2 = "decoration";
    /* char    *s2 = "Decoration"; */
    printf("diff of \n\t%s\n\t%s\n\t\t=%d\n",
            s1, s2, ft_memcmp(s1, s2, ft_strlen(s1))
            /* s1, s2, 3 */
            );
}
