// TEST INCLUDES
#include <stdio.h>
#include <string.h>

#include "libft.h"
/*
** Copies n bytes from src to dst.
** If within this n bytes (unsigned char)c occurs in src, c is copied to dst
** and ptr to the next byte of dst is returned.
** If no c encounters, then copies n bytes and returns NULL.
** If dst and src overlap, behavior is undefined.
** memccpy is defined in <string.h>. 
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    unsigned char *d;
    
    d = (unsigned char *)dst;
    while (n--)
    {
        *d = *(const unsigned char *)src++;
        if (*d++ == (unsigned char)c)
            return (d);
    }
    return (NULL);
}

// no check if n goes beyond length (no check whether dst or src already ended)
// (NULL, NULL, 'C', 0) - no error, return NULL
// (NULL, NULL, 'C', 3) - error
// (NULL, s, 'C', 0) - no error, return NULL
// (NULL, s, 'C', 3) - error
// (d, NULL, 'C', 0) - no error, return NULL
// (d, NULL, 'C', 3) - error
// (d, s, 'C', 0) - no error, return NULL