#include "libft.h"
/*
** Lexicographically compares the null-terminated strings s1 and s2
** at most n characters. Stops if \0 is encouneterd.
** Returns:
** - 0 (identical);
** - positive (s1 > s2) or negative (s1 < s2) int.
**  The comparison is done using unsigned characters.
** strncmp is defined in <string.h>. 
*/

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
    const unsigned char *str1;
    unsigned char       *str2;

    if ((s1 && (s1 == s2)) || !n)
        return (0);
    str1 = (const unsigned char *)s1;
    str2 = (unsigned char *)s2;
    while (n-- && (*str1 || *str2))
    {
        if (*str1++ != *str2++)
            return (*(--str1) - *(--str2));
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