#include "libft.h"

/*
** Finds first appearence of any chatacter defined in set in string s
** and returns pointer to it, if no appearence - returns NULL.
*/

char	*ft_strchrset(char *s, char *set)
{
	char *tmp;

	tmp = s;
	while (*s && !ft_strchr(set, *s))
		s++;
	return (!*s ? NULL : s);
}