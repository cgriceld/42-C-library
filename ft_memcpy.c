// TEST INCLUDES
#include <stdio.h>
#include <string.h>

#include "libft.h"
/*
** Copies n bytes from src to dst. 
** If dst and src overlap, behavior is undefined.
** Returns dst.
** memcpy is defined in <string.h>. 
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *tmp;

    if (dst == src || !n)
        return (dst);
    tmp = (unsigned char *)dst;
    while (n--)
        *tmp++ = *(const unsigned char *)src++;
	return (dst);
}

// no check if n goes beyond length (no check whether dst or src already ended)
// write to dst as much as possible; if src ended, but n still isn't 0 write some random bytes to dst
// (NULL, NULL, 0) - no error, return NULL (dst)
// (NULL, NULL, 3) - no error, return NULL (dst)
// (NULL, s, 0) - no error, return NULL (dst)
// (NULL, s, 3) - error
// (d, NULL, 0) - no error, return dst
// (d, NULL, 3) - error
// (d, s, 0) - no error, return dst