#include "libft.h"

/*
** Convert ASCII string s to int representation.
** Same as (int)strtol - convert string to long.
** atoi is defined in <stdlib.h>.
*/

/*
** Returns 1 if sign is negative ('-') or positive ('+').
*/

static int	ft_issign(const char c)
{
	return (c == 43 || c == 45);
}

/*
** Returns 1 if c is \t, \n, \v, \f, \r or ' '.
*/

static int	ft_isspace(const char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int			ft_atoi(const char *str)
{
	long long int	prevn;
	long long int	n;
	int				sign;

	n = 0;
	sign = 1;
	while (*str && ft_isspace(*str))
		str++;
	if (ft_issign(*str) && *str++ == '-')
		sign = -1;
	while (*str && ft_isdigit(*str))
	{
		prevn = n;
		n = 10 * n + sign * (*str++ - 48); //*
		if (n > prevn && sign == -1) //**
			return (0);
		if (n < prevn && sign == 1)
			return (-1);
	}
	return (n);
}

// (NULL) - error

//* sign *
// if sign is negative: -n - (new digit)
// positive: n + (new digit)

//**
// check for long long overflow:
// if negative overflows, it will be now positive (bigger than prevnum)
// if positive - will be negative