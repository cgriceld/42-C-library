#include "libft.h"

/*
** Outputs the string ’s’ to the given file descriptor.
** ** Returns -1 in case of fd or write error and 1 otherwise.
*/
int	ft_putstr_fd(const char *s, const int fd)
{
	if (fd >= 0 && s)
	{
		if (write(fd, s, ft_strlen(s)) < 0)
			return (-1);
		return (1);
	}
	return (-1);
}
