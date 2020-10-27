#include "libft.h"
/*
** Contiguously allocates enough space for count objects that are size
** bytes of memory each and returns a pointer to the allocated memory.
** The allocated memory is filled with zero bytes.
** If ok, returns pointer to allocated memory, otherwise - NULL.
** calloc is defined in <stdlib.h>.
*/

void    *ft_calloc(size_t count, size_t size)
{
    void *res;

    if (SIZE_MAX / size < count) //*
        return (NULL);
    res = malloc(count * size);
    if (!res)
        return (NULL);
    ft_bzero(res, count * size);
    return (res);
}

//* (count * size) can overflow malloc's argument of size_t type,
// so memory of wrong size will be allocated, when it shouldn't be allocated at all
// count * size <= SIZE_MAX
// SIZE_MAX / size >= count - condition for ok allocation