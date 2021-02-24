#include "libft.h"

/*
** Returns 1 of string consists only from digits and 0 otherwise.
*/

int	ft_strdigits(char *str)
{
	while (*str && ft_isdigit(*str))
		str++;
	return (!*str ? 1 : 0);
}