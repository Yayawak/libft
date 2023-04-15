/* #include <stdio.h> */

int ft_isalpha(char);

/* int main(int argc, char** argv) */
/* { */
/*     char    c; */

/*     if (argc == 2) */
/*     { */
/*         /1* c = **argv; *1/ */
/*         printf("*argv[0] = %c", *argv[0]); // name of program */
/*         printf("*argv[1] = %c", *argv[1]); */
/*         c = *argv[1]; */
/*     } */
/*     printf("Number of argc = %d\n", argc); */
/*     printf("%d\n", ft_isalpha(c)); */

/*     return (0); */
/* } */

int ft_isalpha(char c)
{

    /* printf("c = %d\n", c); */
    /* if ((c >= 65 && c <= 90) || */
    /*     (c >= 97 && c <= 122)) */
    if ((c >= 'A' && c <= 'Z') ||
        (c >= 'a' && c <= 'z'))
    {
        return (1);
    }
    return (0);
}

