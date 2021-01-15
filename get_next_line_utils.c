#include "libft.h"

int		lstdelone(t_lstfd **head, const int fd)
{
	t_lstfd *tmp;
	t_lstfd *previous;

	tmp = *head;
	if (tmp->fd == fd)
	{
		*head = tmp->next;
		if (tmp->cache)
			free(tmp->cache);
		free(tmp);
		return (0);
	}
	while (tmp->fd != fd)
	{
		previous = tmp;
		tmp = tmp->next;
	}
	previous->next = tmp->next;
	if (tmp->cache)
		free(tmp->cache);
	free(tmp);
	return (0);
}

char	*nchr(const char *s)
{
	while (*s && *s != '\n')
		s++;
	return (*s == '\n' ? (char *)s : NULL);
}

int		subcache(char **cache, char *n)
{
	char *subcache;

	subcache = ft_strdup(n);
	if (!subcache)
		return (0);
	free(*cache);
	*cache = subcache;
	return (1);
}
