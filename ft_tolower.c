/*
** Returns lower-case letter if c is upper-case and unchanged c otherwise.
** tolower is defined in <ctype.h>. 
*/

int     ft_tolower(int c)
{
    return (c >= 65 && c <= 90 ? c + 32 : c);
}

/*
int     main(void)
{
    if (ft_tolower('1') == tolower('1'))
        printf("%s", "OK\n");
    if (ft_tolower('!') == tolower('!'))
        printf("%s", "OK\n");
    if (ft_tolower('s') == tolower('s'))
        printf("%s", "OK\n");
    if (ft_tolower('S') == tolower('S'))
        printf("%s", "OK\n");
    if (ft_tolower(' ') == tolower(' '))
        printf("%s", "OK\n");
    if (ft_tolower('    ') == tolower('    '))
        printf("%s", "OK\n");
    return (0);
}
*/