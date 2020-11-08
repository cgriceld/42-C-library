#include "libft.h"

/*
** Takes the beginning of the list,
** and returns the last element.
*/

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
