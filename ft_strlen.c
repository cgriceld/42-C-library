#include "libft.h"

/*
** Returns the length (number of characters before \0) of given string,
** \0 excluded.
** strlen is defined in <string.h>.
*/

size_t	ft_strlen(const char *s)
{
	const char *str;

	str = s;
	while (*str)
		str++;
	return (str - s);
}

// (NULL) - error