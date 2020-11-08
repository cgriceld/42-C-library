#include "libft.h"

/*
** Allocates with malloc and returns a substring
** from the string ’s’.
** The substring begins at index ’start’ and is of
** maximum size ’len’.
** Returns pointer to substring or NULL if malloc fails.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		sublen;
	char const	*substart;
	char		*substr;
	char		*tmp;

	if (!s)
		return (NULL);
	while (start-- && *s)
		s++;
	substart = s;
	while (len-- && *s)
		s++;
	sublen = s - substart;
	substr = (char *)malloc(sublen + 1);
	if (!substr)
		return (NULL);
	tmp = substr;
	while (sublen--)
		*tmp++ = *substart++;
	*tmp = '\0';
	return (substr);
}

// if index start is out of range (beyond s's length), returns empty string (sublen = 0)
// if copy starts, s has ended, but len isn't 0, then truncates substring
// allocates size of memory that will really be used