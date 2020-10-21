// TEST INCLUDES
#include <stdio.h>
#include <string.h>

#include "libft.h"
/*
** Copies len bytes from string src to string dst.
** src and dst may overlap;
** the copy is always done in a non-destructive manner.
** Returns dst.
** memmove is defined in <string.h>. 
*/

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char       *d;
    const unsigned char *s;
    
    if (dst == src || !len)
        return (dst);
    d = (unsigned char *)dst;
    s = (const unsigned char *)src;
    if (s < d)
    {
        s += len - 1;
        d += len - 1;
        while (len--)
            *d-- = *s--;
        return (dst);
    }
    return (ft_memcpy(dst, src, len));
}

// original memmove uses buffer to overcome overaping
// problem when src < dst and src's end intersects with dst's start
// (NULL, NULL, 0) - no error, return NULL (dst)
// (NULL, NULL, 3) - no error, return NULL (dst)
// (NULL, s, 0) - no error, return NULL (dst)
// (NULL, s, 3) - error
// (d, NULL, 0) - no error, return dst
// (d, NULL, 3) - error
// (d, s, 0) - no error, return dst