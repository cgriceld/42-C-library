/*
** Returns non-zero (1) if c is decimal digit character (ASCII codes 48-57, '0'-'9')
** or zero otherwise.
** isdigit is defined in <ctype.h>. 
*/

int     ft_isdigit(int c)
{
    return (c >= 48 && c <= 57);
}

/*
int     main(void)
{
    printf("%d\n", EOF); // EOF = -1
    if (ft_isdigit('1') == isdigit('1'))
        printf("%s", "OK\n");
    if (ft_isdigit('!') == isdigit('!'))
        printf("%s", "OK\n");
    if (ft_isdigit('s') == isdigit('s'))
        printf("%s", "OK\n");
    if (ft_isdigit(-1) == isdigit(-1))
        printf("%s", "OK\n");
    if (ft_isdigit(50) == isdigit(50))
        printf("%s", "OK\n");
    if (ft_isdigit(500) == isdigit(500))
        printf("%s", "OK\n");
    return (0);
}
*/

// https://stackoverflow.com/questions/46652046/why-is-parameter-to-isdigit-integer
// https://stackoverflow.com/questions/45003739/isdigitc-a-char-or-int-type