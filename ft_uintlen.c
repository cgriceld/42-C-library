#include "libft.h"

/*
** Returns the number of digits in unsigned int n.
*/

int	ft_uintlen(unsigned int n)
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