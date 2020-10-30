#include "libft.h"
/*
** Outputs the character ’c’ to the given
** file descriptor.
*/

void    ft_putchar_fd(char c, int fd)
{
    if (fd >= 0) //*
        write(fd, &c, 1);
}

//* open() can return -1 if an error occurred
// fd - small, nonnegative integer
// can write to stdin (0)
