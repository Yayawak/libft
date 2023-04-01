#include "../../includes/libft.h"

size_t ft_strlen(const char* str)
{
    int len = 0;

    while(*str != '\0') {
        len++;
        str++;
    }
    return (len);
}

/* int	main(void) */
/* { */
/* 	int i = ft_strlen("strlen"); */
/*     printf("len : %d\n", i); */
/* 	return (0); */
/* } */
