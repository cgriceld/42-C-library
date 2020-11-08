#include "libft.h"

/*
** Allocates memory for copy of string s1,
** copies and returns pointer to copy.
** Returns NULL in case of allocation fail.
** strdup is defined in <string.h>.
*/

char	*ft_strdup(const char *s1)
{
	char *dup;
	char *tmp;

	dup = (char *)malloc(ft_strlen(s1) + 1);
	if (!dup)
		return (NULL);
	tmp = dup;
	while (*s1)
		*tmp++ = *s1++;
	*tmp = '\0';
	return (dup);
}

// (NULL) - error