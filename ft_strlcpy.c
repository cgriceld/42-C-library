#include "libft.h"
/*
** Copies up to dstsize-1 characters from the src to dst,
** NUL-terminating the result if dstsize is not 0.
** Returns length of src.
** If src and dst overalap - underfined. String is truncated if src > dst.
** strlcpy is defined in <string.h>. 
*/

size_t      ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    const char  *s;

    s = src;
    if (dstsize)
    {
        while (*src && --dstsize)
            *dst++ = *src++;
        *dst = '\0';
    }
    while (*src)
        src++;
    return (src - s);
}

// (NULL, NULL, 0) - error
// (NULL, NULL, 3) - error
// (NULL, s, 0) - no error, return len(s)
// (NULL, s, 3) - error
// (d, NULL, 0) - error
// (d, NULL, 3) - error
// (d, s, 0) - no error, return len(s)