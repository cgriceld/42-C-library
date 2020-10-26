#include "libft.h"
/*
** Searches at most len characters for first occurrence
** of the null-terminated string needle in the string haystack.
** Characters that appear after a \0 are not searched.
** Returns:
** - pointer to the start of needle in haystask if it is;
** - NULL if no needle;
** - haystask if needle is empty string.
** strnstr is defined in <string.h>. 
*/

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t nlen;

    if (!*needle)
        return ((char *)haystack);
    nlen = ft_strlen(needle);
    while (*haystack && nlen <= len)
    {
        if (*haystack++ == *needle)
        {
            if (!(ft_strncmp(haystack, ++needle, --nlen)))
                return ((char *)--haystack);
            needle--;
            nlen++;
        }
        len--;
    }
    return (NULL);
}

// (NULL, NULL, 0) - error
// (NULL, NULL, 3) - error
// (NULL, s, 0) - no error, return NULL
// (NULL, s, 3) - error
// (d, NULL, 0) - error
// (d, NULL, 3) - error
// (d, s, 0) - no error, return NULL