#include "libft.h"

/*
** Allocates with malloc and returns a copy of
** ’s1’ with the characters specified in ’set’ removed
** from the beginning and the end of the string.
** Returns pointer to trimmed string or NULL if malloc fails.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char const *trimstart;

	if (!s1 || !set)
		return (NULL);
	if (!*set || !*s1)
		return (ft_strdup(s1));
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	trimstart = s1;
	while (*s1)
		s1++;
	while (s1 != trimstart && ft_strchr(set, *s1))
		s1--;
	return (ft_substr(trimstart, 0, s1 - trimstart + 1));
}
