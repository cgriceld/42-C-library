// TEST INCLUDES
#include <stdio.h>
#include <string.h>

#include "libft.h"
/*
** Writes len bytes of value c (converted to an unsigned char) to the string b
** and returns pointer to b.
** memset is defined in <string.h>. 
*/

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char   ch;
    unsigned char   *tmp;

    if (len)
    {
        ch = (unsigned char)c;
        tmp = (unsigned char *)b;
        while (len--)
            *tmp++ = ch;
    }
    return (b);
}

// no check if len is beyond string length