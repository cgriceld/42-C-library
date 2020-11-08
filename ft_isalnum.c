#include "libft.h"

/*
** Returns non-zero (1) if c is letter character (65-90 & 97-122)
** or digit (48-57)
** or zero otherwise.
** isalnum is defined in <ctype.h>.
*/

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
