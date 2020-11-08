#include "libft.h"

/*
** Adds the element ’new’ at the end of the list.
** Takes: address of a pointer to the first link
** of a list and address of a pointer to the element to be
** added to the list.
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}
