// TEST INCLUDES
#include <stdio.h>
#include <ctype.h>

/*
** Returns non-zero (1) if c is printable character (ASCII codes 32-126)
** or zero otherwise.
** isprint is defined in <ctype.h>. 
*/

int     ft_isprint(int c)
{
    return (c >= 32 && c <= 126);
}

// TEST
int     main(void)
{
    if (ft_isprint('1') == isprint('1'))
        printf("%s", "OK\n");
    if (ft_isprint('!') == isprint('!'))
        printf("%s", "OK\n");
    if (ft_isprint('s') == isprint('s'))
        printf("%s", "OK\n");
    if (ft_isprint(-1) == isprint(-1))
        printf("%s", "OK\n");
    if (ft_isprint(' ') == isprint(' '))
        printf("%s", "OK\n");
    if (ft_isprint('    ') == isprint('    '))
        printf("%s", "OK\n");
    return (0);
}
