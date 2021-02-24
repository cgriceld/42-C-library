#include "libft.h"

/*
** Returns 1 if string s consists only from characters defined in set and 0 otherwise.
*/

int		ft_strinset(char *s, char *set)
{
	while (*s && ft_strchr(set, *s))
		s++;
	return (!*s ? 1 : 0);
}