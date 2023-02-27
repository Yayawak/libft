int ft_isalnum(unsigned int c)
{
    if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) ||
        (c >= '0' && c <= '9'))
        return (1);
    return (0);
}


/*
#include <stdio.h>
int main()
{
    printf("fn('9') : result = %d\n", ft_isalnum('9'));
    printf("fn('k') : result = %d\n", ft_isalnum('k'));
}
*/
