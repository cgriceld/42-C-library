// TEST INCLUDES
#include <stdio.h>
#include <string.h>

#include "libft.h"
/*
** Returns a pointer to the first occurence of (unsigned char)c byte
** in the string s within n bytes or NULL otherwise.
** memchr is defined in <string.h>. 
*/

void    *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *tmp;
    
    tmp = (unsigned char *)s;
    while (n--)
    {
        if (*tmp++ == (unsigned char)c)
            return ((void *)--tmp);
    }
    return (NULL);
}

// no track if n > s's length
// (s, '\0', 2) - locates \0 if it's within n bytes
// (NULL, 'C', 0) - no error, return NULL
// (NULL, 'C', 3) - error
// (d, 'C', 0) - no error, return NULL