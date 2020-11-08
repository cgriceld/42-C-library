/*
** Returns non-zero (1) if c is ASCII character (0-127)
** or zero otherwise.
** isascii is defined in <ctype.h>.
*/

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
