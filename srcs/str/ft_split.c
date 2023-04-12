#include "../../includes/libft.h"

char ** ft_split(char const *s, char c)
{
    char *  start;
    char *  end;
    char ** str_arr;
    int     sep_count;
    size_t  i;

    start = (char *)s;
    sep_count = 0;

    while (*s++)
        if (*s == c)
            sep_count++;

    str_arr = (char **)malloc(sizeof(char *) * (sep_count + 1));

    i = 0;
    while (i <= sep_count)
    {
        /* printf("st %p1\n", start); */
        /* printf("ed %p2\n", end); */
        end = ft_strchr(start, c);
        if (!end)
            end = (char *)(s + ft_strlen(s));
        str_arr[i] = (char *)malloc((end - start) + 1);
        if (!str_arr[i])
            return (NULL);
        memcpy(str_arr[i], start, (end - start));
        start = end + 1;
        printf("%s\n", str_arr[i]);
        i++;
    }
    return (str_arr);
}

int main()
{
    /* char *  cols = "Name,AttackDamage,MoveSpeed,Class"; */
    char *  cols = "Name,,AttackDamage,MoveSpeed,Class UUID, UML, FIGMA,";
    /* char *  cols = "Name,,AttackDamage,MoveSpeed,Class"; */
    char    sep = ',';
    char ** str_arr = ft_split(cols, sep);

    for (int i = 0; str_arr[i] != NULL; i++)
    {
        printf("element[%d] = %s\n", i, str_arr[i]);
    }
}
