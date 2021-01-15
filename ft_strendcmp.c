#include "libft.h"

/*
** Lexicographically compares the end of null-terminated strings s1 and s2,
** n is a length of ending (e.g., file extention).
** Returns:
** - 0 (identical);
** - 1 (not identical).
*/

int	ft_strendcmp(const char *s1, const char *s2, int n)
{
	while (n--)
		s1++;
	while (*s1)
	{
		if (*s1++ != *s2++)
			return (1);
	}
	return (0);
}