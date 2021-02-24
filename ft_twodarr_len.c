#include "libft.h"

/*
** Returns number of rows in 2D array, last row must be set to NULL.
*/

size_t	ft_twodarr_len(void **arr)
{
	size_t len;

	len = 0;
	while (*arr++)
		len++;
	return (len);
}