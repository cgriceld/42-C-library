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
    if (!s || !f)
        return (NULL);
    
}