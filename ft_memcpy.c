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
    void *tmp;

    if (dst == src || !n)
        return (dst);
    tmp = dst;
    while (n--)
        *(unsigned char *)dst++ = *(unsigned char *)src++;
	return (tmp);
}

// no check if n goes beyond dst length (no check whether dst already ended)
// if both src and dst are NULL (no matter n is 0 or not) - no error
// if dst or src is NULL, but n = 0 - no error
// if dst or src is NULL, but n is non-zero - error