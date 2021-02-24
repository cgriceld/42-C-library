#include "libft.h"

/*
** Returns number of times character ch appears in string s.
*/

int		ft_numchstr(char *s, char ch)
{
	int i;

	i = 0;
	while (*s)
	{
		if (*s++ == ch)
			i++;
	}
	return (i);
}