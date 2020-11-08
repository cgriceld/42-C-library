/*
** Returns non-zero (1) if c is printable character (ASCII codes 32-126)
** or zero otherwise.
** isprint is defined in <ctype.h>.
*/

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
