#include "libft.h"

/*
** Returns a pointer to the first occurence of (char)c
** in the string s or NULL otherwise.
** c can be \0, then returns pointer to \0.
** strchr is defined in <string.h>.
*/

char	*ft_strchr(const char *s, int c)
{
	char ch;

	ch = (char)c;
	while (*s && *s != ch)
		s++;
	return (*s == ch ? (char *)s : NULL);
}

// https://stackoverflow.com/questions/2394011/why-does-strchr-take-an-int-for-the-char-to-be-found
// (NULL, 'c') - error