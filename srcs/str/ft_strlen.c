int ft_strlen(char* str)
{
    int len = 0;

    while(*str != '\0') {
        len++;
        str++;
    }
    return (len);
}
/*
#include <stdio.h>
#include <string.h>
#include "ft_strlen.c"

int	main(void)
{
	int i = ft_strlen("strlen");
    printf("len : %d\n", i);
	return (0);
}
*/
