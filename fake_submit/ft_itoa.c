#include "../../includes/libft.h"

char *  ft_itoa(int n)
{
    char *  str;
    int     len;
    int     tmp;
    int     is_neg;

    is_neg = 0;
    len = 1;
    tmp = n;

    while (tmp /= 10)
        len++;
    if (n < 0)
    {
        is_neg = 1;
        n = -n;
    }
    str = (char *)malloc(sizeof(char) * (len + 1 + is_neg));
    str[len + is_neg] = '\0';
    while (len--)
    {
        str[len + is_neg] = n % 10 + '0';
        n /= 10;
    }
    if (is_neg)
        str[0] = '-';

    return (str);
}


/* int     main() */
/* { */

/*     printf("result = %s\n", ft_itoa(123456)); */
/*     printf("result = %s\n", ft_itoa(-123456)); */
/*     return 0; */
/* } */
