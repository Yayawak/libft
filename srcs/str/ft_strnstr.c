#include "../../includes/libft.h"
// locate first occurence of the null-termianted string

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    // needle is substring to search
    // haystack is full string
    size_t  h;
    size_t  n;

    h = 0;
    if (needle[0] == '\0')
        return ((char *)haystack);
    while (haystack[h] != '\0')
    {
        n = 0;
        while (
                // check same element in array
                haystack[h + n] == needle[n]
                &&
                // check is out of bound
                (h + n) < len)
        {
            if (haystack[h + n] == '\0' &&
                    needle[n] == '\0')
                return ((char *)&haystack[h]);
            n++;
        }
        if (needle[n] == '\0')
            return ((char *)haystack + h);
        h++;
    }
    return (0);
}

int main()
{
    /* char    *haystack = "Hey hay hey haystack and heedle"; */
    char    *haystack = "hello needle";
    char    *needle = "needle";
    printf("haystack is : %s\nneedle is : %s\nlocation found is : %p\n",
            haystack, needle,
            ft_strnstr(haystack, needle, 12)
            );
}
