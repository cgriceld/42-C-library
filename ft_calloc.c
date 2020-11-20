#include "libft.h"

/*
** Contiguously allocates enough space for count objects that are size
** bytes of memory each and returns a pointer to the allocated memory.
** The allocated memory is filled with zero bytes.
** If ok, returns pointer to allocated memory, otherwise - NULL.
** calloc is defined in <stdlib.h>.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void *res;

	res = malloc(count * size);
	if (!res)
		return (NULL);
	ft_bzero(res, count * size);
	return (res);
}

// if count and size = 0
// count = 1 and size = 1
// alloc 1 byte and make it 0