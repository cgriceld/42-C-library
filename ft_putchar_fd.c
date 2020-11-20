#include "libft.h"

/*
** Outputs the character ’c’ to the given file descriptor. 
** Returns -1 in case of fd or write error and 1 otherwise.
*/

int	ft_putchar_fd(const char c, const int fd)
{
	if (fd >= 0)
	{
		if (write(fd, &c, 1) < 0)
			return (-1);
		return (1);
	}
	return (-1);
}

//* open() can return -1 if an error occurred
// fd - small, nonnegative integer