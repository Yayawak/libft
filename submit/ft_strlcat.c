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

size_t ft_strlcat(char* restrict dst, const char* restrict src, size_t dstsize)
{
    size_t c;
    size_t d;

    c = ft_strlen(dst);
    if (dstsize <= c)
        return (dstsize + ft_strlen(src));
    d = 0;
    while (src[d] != '\0' && c + 1 < dstsize)
    {
        dst[c] = src[d];
        c++;
        d++;
    }
    dst[c] = '\0';
    return (c + src[d]);
}

/*
int    main()
{
    char *first = "This This is ";
    char last[] = "a potentially long string";
    int size = 64;
    char buffer[size];

    strcpy(buffer, first);
    int r = ft_strlcpy(buffer, last, size);
    printf("r = %d\n", r);
    printf("Buffer = %s", buffer);
    return (0);
}
*/
