#include "libft.h"
/*
** Allocates with malloc and returns a string
** representing the int n (can be negative).
** Returns NULL if allocation fails.
*/

/*
** Returns length of n including sign.
*/
static int      ft_nlen(int n)
{
    int i;

    i = n <= 0 ? 1 : 0;
    while (n)
    {
        i++;
        n /= 10;
    }
    return (i);
}

char    *ft_itoa(int n)
{
    int     len;
    int     sign;
    char    *str;

    len = ft_nlen(n);
    sign = n < 0 ? -1 : 1;
    str = (char *)malloc(len + 1);
    if (!str)
        return (NULL);
    str += len;
    *str-- = '\0';
    if (!n)
        *str = '0';
    while (n)
    {
        *str = sign * (n % 10) + 48; //*
        if (n > 9 || n < -9)
            str--;
        n /= 10;
    }
    if (sign < 0)
        *--str = '-';
    return (str);
}

//* in c remainder will be negative if number is negative