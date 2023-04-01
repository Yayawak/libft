#include "../../includes/libft.h"

// len is expected to be len of s or plus lenght of wanted how long
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    /* malloc(); */
    char    *new_str;
    size_t  i;
    size_t  j;

    new_str = (char *)malloc(len + 1);
    /* new_str = (char *)malloc((sizeof(s) * (len + 1))); */
    if (!s || !new_str)
        return (0);
    i = start;
    j = 0;
    while (i < ft_strlen(s) && j < len)
        new_str[j++] = s[i++];
    // append end \0 to my new text
    new_str[j] = '\0';
    return (new_str);
}

int main(int argc, char** argv)
{
    char    *str = "Axios espresso pretonum";
    if (argc == 1)
        printf("provide start index to sub string (%s)\n", str);
    unsigned int    sub_at = 5;

    size_t          plus_len = 4;
    if (*argv[1])
        sub_at = *argv[1] - '0';
    if (*argv[2])
        plus_len = *argv[2] - '0';
        /* sub_at = *argv[1]; */
    char    *sub_str = ft_substr(str, sub_at, plus_len);
    printf("full str : %s\nsub_at : %d\nsub str : %s\n",
            str, sub_at, sub_str);
}
