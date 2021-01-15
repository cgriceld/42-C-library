#include "libft.h"

static int		lstclear(t_lstfd **head, char **line)
{
	t_lstfd *tmp;

	if (*line)
		free(*line);
	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		if (tmp->cache)
			free(tmp->cache);
		free(tmp);
	}
	return (-1);
}

static t_lstfd	*lstfdnew(const int fd)
{
	t_lstfd	*newnode;

	newnode = (t_lstfd *)malloc(sizeof(t_lstfd));
	if (!newnode)
		return (NULL);
	newnode->fd = fd;
	newnode->cache = NULL;
	newnode->next = NULL;
	return (newnode);
}

static void		check_cache(t_lstfd *tmp, char **line, int *flag)
{
	char *n;

	if (!(tmp->cache))
		return ;
	free(*line);
	if ((n = nchr(tmp->cache)))
	{
		*n++ = '\0';
		*flag = (!(*line = ft_strdup(tmp->cache)) || \
				!subcache(&(tmp->cache), n)) ? -1 : 1;
		return ;
	}
	*line = ft_strdup(tmp->cache);
	if (!*line)
		*flag = -1;
	free(tmp->cache);
	tmp->cache = NULL;
}

static void		process_buff(char *buff, char **line, t_lstfd *tmp, int *flag)
{
	ssize_t	bytes_read;
	char	*n;
	char	*tmpline;

	check_cache(tmp, line, flag);
	bytes_read = 0;
	while (!*flag && (bytes_read = read(tmp->fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[bytes_read] = '\0';
		if ((n = nchr(buff)))
		{
			*n++ = '\0';
			*flag = !(tmp->cache = ft_strdup(n)) ? -1 : 1;
			if (*flag < 0)
				return;
		}
		tmpline = *line;
		*line = ft_strjoin(*line, buff);
		if (!*line)
			*flag = -1;
		free(tmpline);
	}
	*flag = (bytes_read < 0) ? -1 : *flag;
}

int				get_next_line(int fd, char **line)
{
	static t_lstfd	*head;
	t_lstfd			*tmp;
	char			*buff;
	int				flag;

	if (BUFFER_SIZE <= 0 || fd < 0 || !line || \
		(!head && !(head = lstfdnew(fd))))
		return (-1);
	tmp = head;
	while (tmp->fd != fd)
	{
		if (!(tmp->next) && !(tmp->next = lstfdnew(fd)))
			return (lstclear(&head, NULL));
		tmp = tmp->next;
	}
	if (!(buff = (char *)malloc(BUFFER_SIZE + 1)))
		return (lstclear(&head, NULL));
	flag = 0;
	if (!(*line = ft_strdup("")))
		return (lstclear(&head, NULL));
	process_buff(buff, line, tmp, &flag);
	free(buff);
	if (flag)
		return (flag == 1 ? flag : lstclear(&head, line));
	return (lstdelone(&head, tmp->fd));
}
