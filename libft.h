#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

/*
** C type
*/
int     ft_isalpha(int c);
int     ft_isdigit(int c);

/*
** Memory
*/
void    *ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);

/*
** Strings
*/

size_t  ft_strlen(const char *s);
int     ft_strncmp(const char *s1, const char *s2, size_t n);

#endif