#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>
#include <stdlib.h>
#include <stdint.h> // for calloc (SIZE_MAX)

/*
** C type
*/
int     ft_isalpha(int c);
int     ft_isdigit(int c);

/*
** Memory
*/
void    *ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);

/*
** Strings
*/

size_t  ft_strlen(const char *s);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char    *ft_substr(char const *s, unsigned int start, size_t len);

#endif