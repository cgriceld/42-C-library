#include "libft.h"
/*
** Takes the beginning of the list,
** countes number of its elements
** and returns the length.
*/

int     ft_lstsize(t_list *lst)
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

// no sense to make t_list *tmp to iterate through list,
// because we have *lst as parameter instead of **lst