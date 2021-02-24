#include "libft.h"

/*
** Frees pointer and sets its value to NULL.
*/

void	ft_ptr_free(void **ptr)
{
	free(*ptr);
	*ptr = NULL;
}