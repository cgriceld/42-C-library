/*
** Returns upper-case letter if c is lower-case and unchanged c otherwise.
** toupper is defined in <ctype.h>.
*/

int	ft_toupper(int c)
{
	return (c >= 97 && c <= 122 ? c - 32 : c);
}
