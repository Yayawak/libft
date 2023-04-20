int ft_isprint(unsigned char c)
{
    if ((c >= 0  && c <= 31) || (c == 127))
    {
        return (0);
    }
    return (1);
}
/*
#include <stdio.h>
#include <string.h>
#include "ft_isprint.c"

int	main(void)
{
	int i = ft_isprint(1);
    printf("print status : %d
", i);
	return (0);
}*/
