#include "libft.h"
/*
** Applies the function ’f’ to each character of the
** string ’s’ to create a new string with malloc
** resulting from successive applications of ’f’.
** Returns pointer to string created from the successive applications
** of ’f’ or NULL if malloc fails.
*/

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char            *strf;
    char            *tmp;

    if (!s || !f)
        return (NULL);
    strf = (char *)malloc(ft_strlen(s) + 1);
    if (!strf)
        return (NULL);
    i = 0;
    tmp = strf;
    while (*s)
        *tmp++ = f(i++, *s++);
    *tmp = '\0';
    return (strf);
}

// assume that f(index, elem[index])