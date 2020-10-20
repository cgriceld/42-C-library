// TEST INCLUDES
#include <stdio.h>
#include <ctype.h>

/*
** Returns non-zero (1) if c is ASCII character (0-127)
** or zero otherwise.
** isascii is defined in <ctype.h>. 
*/

int     ft_isascii(int c)
{
    return (c >= 0 && c <= 127);
}

// TEST
int     main(void)
{
    if (ft_isascii('1') == isascii('1'))
        printf("%s", "OK\n");
    if (ft_isascii('!') == isascii('!'))
        printf("%s", "OK\n");
    if (ft_isascii('s') == isascii('s'))
        printf("%s", "OK\n");
    if (ft_isascii(-1) == isascii(-1))
        printf("%s", "OK\n");
    if (ft_isascii(' ') == isascii(' '))
        printf("%s", "OK\n");
    if (ft_isascii('    ') == isascii('    '))
        printf("%s", "OK\n");
    if (ft_isascii('$') == isascii('$'))
        printf("%s", "OK\n");
    return (0);
}