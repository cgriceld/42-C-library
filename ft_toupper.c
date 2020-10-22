/*
** Returns upper-case letter if c is lower-case and unchanged c otherwise.
** toupper is defined in <ctype.h>. 
*/

int     ft_toupper(int c)
{
    return (c >= 97 && c <= 122 ? c - 32 : c);
}

/*
int     main(void)
{
    if (ft_toupper('1') == toupper('1'))
        printf("%s", "OK\n");
    if (ft_toupper('!') == toupper('!'))
        printf("%s", "OK\n");
    if (ft_toupper('s') == toupper('s'))
        printf("%s", "OK\n");
    if (ft_toupper('S') == toupper('S'))
        printf("%s", "OK\n");
    if (ft_toupper(' ') == toupper(' '))
        printf("%s", "OK\n");
    if (ft_toupper('    ') == toupper('    '))
        printf("%s", "OK\n");
    return (0);
}
*/