#include "libft.h"

/*
** Allocates with malloc and returns a string
** representing the unsigned int n in hexadecimal format.
** If flag = 1, return using upper case letters (ABCDEF),
** and abcdef, when flag = 0.
** Returns NULL if allocation fails.
*/

/*
** Returns length of n in hex format.
*/
static int	ft_hexlen(size_t n)
{
	int i;

	i = (n == 0) ? 1 : 0;
	while (n)
	{
		i++;
		n /= 16;
	}
	return (i);
}

char		*ft_itoahex(size_t n, const int flag)
{
	int		len;
	char	*str;

	len = ft_hexlen(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str += len;
	*str-- = '\0';
	if (!n)
		*str = '0';
	while (n)
	{
		if (n % 16 < 10)
			*str = (n % 16) + 48;
		else
			*str = flag ? (n % 16) + 55 : (n % 16) + 87;
		if (n > 15)
			str--;
		n /= 16;
	}
	return (str);
}