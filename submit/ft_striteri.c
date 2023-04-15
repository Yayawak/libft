#include "../../includes/libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    size_t  i;

    if (!s || !f)
        return ;

    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

void    print_char_index(unsigned int index, char *c)
{
    printf("Character \"%c\" at index \"%d\"\n", *c, index);
}

int main()
{
    char *  s = "function lambda is not available ?";
    ft_striteri(s, print_char_index);
}
