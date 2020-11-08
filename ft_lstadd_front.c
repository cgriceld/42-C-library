#include "libft.h"

/*
** Adds the element ’new’ at the beginning of the
** list. Takes: address of a pointer to the first link
** of a list and address of a pointer to the element to be
** added to the list.
*/

void		ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	if (!*lst) //*
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

//* if lst is empty (head = NULL)