/*
** Returns non-zero (1) if c is decimal digit character
** (ASCII codes 48-57, '0'-'9')
** or zero otherwise.
** isdigit is defined in <ctype.h>.
*/

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
