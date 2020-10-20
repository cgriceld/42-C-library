// TEST INCLUDES
#include <stdio.h>
#include <string.h>

#include "libft.h"
/*
** If n != 0 writes n zero bytes to the string s.
** No return.
** bzero is defined in <string.h>. 
*/

void	ft_bzero(void *s, size_t n)
{
    if (n)
        ft_memset(s, 0, n);
}