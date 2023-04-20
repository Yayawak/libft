int ft_tolower(unsigned int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        /* c += 'B' - 'b'; 66 - 98 is negative -> zero */
        c += 'b' - 'B';
    }
    return (c);
}

/*
#include "stdio.h"
int main()
{
    unsigned char   c = 'B';
    int             loweredC = ft_tolower(c);
    printf("From %c to %c\n", c, loweredC);
}
*/
