#include "libft.h"

/*
** Allocates with malloc and returns a new
** element. The variable ’content’ is initialized
** with the value of the parameter ’content’.
** The variable ’next’ is initialized to NULL.
*/

t_list		*ft_lstnew(void *content)
{
	t_list *newnode;

	newnode = (t_list *)malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}
