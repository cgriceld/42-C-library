#include "libft.h"

/*
** Returns the number of digits in int n,
** SIGN EXCLUDED
*/

int	ft_intlen(int n)
{
	int i;

	i = (n == 0) ? 1 : 0;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}