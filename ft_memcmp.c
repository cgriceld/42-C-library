// TEST INCLUDES
#include <stdio.h>
#include <string.h>

#include "libft.h"
/*
** Compare byte by byte strings s1 and s2 both of length n. 
** Return:
** 0 - identical (empty string are identical)
** or the diff between first two different characters.
** memcmp is defined in <string.h>. 
*/

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *first;
    const unsigned char *second;

    if (s1 == s2 || !n)
        return (0);
    first = (const unsigned char *)s1;
    second = (const unsigned char *)s2;
    while (n--)
    {
        if (*first != *second)
            return (*first - *second);
        first++;
        second++;
    }
    return (0);
}

// (NULL, NULL, 0) - no error, return 0
// (NULL, NULL, 3) - no error, return 0
// (NULL, s, 0) - no error, return 0
// (NULL, s, 3) - error
// (d, NULL, 0) - no error, return 0
// (d, NULL, 3) - error
// (d, s, 0) - no error, return 0