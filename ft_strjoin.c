#include "libft.h"
/*
** Allocates with malloc and returns a new
** string, which is the result of the concatenation
** of ’s1’ and ’s2’.
** Returns pointer to new string or NULL if malloc fails.
*/

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *join;
    char    *tmp;
    size_t  lens1;
    size_t  lens2;

    if (!s1 || !s2)
        return (NULL);
    lens1 = ft_strlen(s1);
    lens2 = ft_strlen(s2);
    if ((SIZE_MAX - 1 - lens2) < lens1)
        return (NULL);
    join = (char *)malloc(lens1 + lens2 + 1);
    if (!join)
        return (NULL);
    tmp = join;
    while (*s1)
        *tmp++ = *s1++;
    while (*s2)
        *tmp++ = *s2++;
    *tmp = '\0';
    return (join);
}