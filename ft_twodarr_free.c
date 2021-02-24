#include "libft.h"

/*
** Frees 2D array and sets pointer value to NULL.
*/

void	ft_twodarr_free(void ***arr, int len)
{
	void **tmp;

	tmp = *arr;
	while (len--)
	{
		if (tmp[len])
			free(tmp[len]);
	}
	free(tmp);
	*arr = NULL;
}