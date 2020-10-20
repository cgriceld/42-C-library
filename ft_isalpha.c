// TEST INCLUDES
#include <stdio.h>
#include <ctype.h>

/*
** Returns non-zero (1) if c is letter character (65-90 & 97-122)
** or zero otherwise.
** isalpha is defined in <ctype.h>. 
*/

int     ft_isalpha(int c)
{
    return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

// TEST
/*
int     main(void)
{
    if (ft_isalpha('1') == isalpha('1'))
        printf("%s", "OK\n");
    if (ft_isalpha('!') == isalpha('!'))
        printf("%s", "OK\n");
    if (ft_isalpha('s') == isalpha('s'))
        printf("%s", "OK\n");
    if (ft_isalpha('Z') == isalpha('Z'))
        printf("%s", "OK\n");
    if (ft_isalpha(' ') == isalpha(' '))
        printf("%s", "OK\n");
    if (ft_isalpha('    ') == isalpha('    '))
        printf("%s", "OK\n");
    if (ft_isalpha('$') == isalpha('$'))
        printf("%s", "OK\n");
    return (0);
}
*/