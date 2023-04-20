int ft_toupper(unsigned int c)
{
    if (c >= 'a' && c <= 'z')
    {
        c -= 'h' - 'H';
    }
    return (c);
}

#include "stdio.h"
int main()
{
    unsigned char   c = 'B';
    int             upperedC = ft_toupper(c);
    printf("From %c to %c\n", c, upperedC);
}
