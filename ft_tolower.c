/*
** Returns lower-case letter if c is upper-case and unchanged c otherwise.
** tolower is defined in <ctype.h>.
*/

int	ft_tolower(int c)
{
	return (c >= 65 && c <= 90 ? c + 32 : c);
}
