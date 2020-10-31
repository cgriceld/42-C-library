#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <stdint.h> // for calloc (SIZE_MAX)
#include <unistd.h>

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

/*
** I/O
*/
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);

/*
** Linked lists
*/
typedef struct  s_list
{
    void            *content;
    struct s_list   *next;
}               t_list;

t_list      *ft_lstlast(t_list *lst);
t_list      *ft_lstnew(void *content);
void        ft_lstclear(t_list **lst, void (*del)(void*));

#endif