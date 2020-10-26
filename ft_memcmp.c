#include "libft.h"
/*
** Compares byte by byte strings s1 and s2 both of length n.
** Works with raw binary data, to track \0 better use strncmp.
** Return:
** 0 - identical (empty string are identical);
** or the diff between first two different bytes (unsigned chars).
** memcmp is defined in <string.h>. 
*/

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *first;
    const unsigned char *second;

    if ((s1 && (s1 == s2)) || !n)
        return (0);
    first = (const unsigned char *)s1;
    second = (const unsigned char *)s2;
    while (n--)
    {
        if (*first++ != *second++)
            return (*(--first) - *(--second));
    }
    return (0);
}

// (NULL, NULL, 0) - no error, return 0
// (NULL, NULL, 3) - error
// (NULL, s, 0) - no error, return 0
// (NULL, s, 3) - error
// (d, NULL, 0) - no error, return 0
// (d, NULL, 3) - error
// (d, s, 0) - no error, return 0