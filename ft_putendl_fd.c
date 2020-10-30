#include "libft.h"
/*
** Outputs the string ’s’ to the given file
** descriptor, followed by a newline.
*/

void    ft_putendl_fd(char *s, int fd)
{
    if (fd >= 0 && s)
    {
        ft_putstr_fd(s, fd);
        ft_putchar_fd('\n', fd);
    }
}