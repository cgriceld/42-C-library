#include "libft.h"

/*
** Outputs the integer ’n’ to the given file
** descriptor.
*/

void	ft_putnbr_fd(int n, int fd)
{
	int sign;

	sign = (n < 0) ? -1 : 1;
	if (n <= -10 || n >= 10)
		ft_putnbr_fd(n / 10, fd);
	else
	{
		if (sign < 0)
			ft_putchar_fd('-', fd);
	}
	ft_putchar_fd(n % 10 * sign + 48, fd);
}
