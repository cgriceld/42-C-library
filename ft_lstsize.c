#include "libft.h"

/*
** Takes the beginning of the list,
** countes number of its elements
** and returns the length.
*/

int	ft_lstsize(t_list *lst)
{
	int len;

	len = 0;
	while (lst)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}
