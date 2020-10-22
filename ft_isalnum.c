#include "libft.h"
/*
** Returns non-zero (1) if c is letter character (65-90 & 97-122) or digit (48-57)
** or zero otherwise.
** isalnum is defined in <ctype.h>. 
*/

int     ft_isalnum(int c)
{
    return (ft_isalpha(c) || ft_isdigit(c));
}

/*
int     main(void)
{
    if (ft_isalnum('1') == isalnum('1'))
        printf("%s", "OK\n");
    if (ft_isalnum('!') == isalnum('!'))
        printf("%s", "OK\n");
    if (ft_isalnum('s') == isalnum('s'))
        printf("%s", "OK\n");
    if (ft_isalnum('Z') == isalnum('Z'))
        printf("%s", "OK\n");
    if (ft_isalnum(' ') == isalnum(' '))
        printf("%s", "OK\n");
    if (ft_isalnum('    ') == isalnum('    '))
        printf("%s", "OK\n");
    if (ft_isalnum('$') == isalnum('$'))
        printf("%s", "OK\n");
    return (0);
}
*/