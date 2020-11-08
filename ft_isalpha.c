/*
** Returns non-zero (1) if c is letter character (65-90 & 97-122)
** or zero otherwise.
** isalpha is defined in <ctype.h>.
*/

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
