#include "libft.h"
/*
** Deletes and frees the given element and every
** successor of that element, using the function ’del’
** and free.
** Finally, the pointer to the list must be set to NULL.
*/

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *tmp;

    if (!del || !lst)
        return ;
    while (*lst) //*
    {
        tmp = *lst;
        *lst = (*lst)->next; //**
        del(tmp->content);
        free(tmp);
    }
}

//* if list is empty (*lst = NULL), then nothing happens, ptr to the list is already NULL
//** when *lst is NULL (which means we del now the last elem), ptr to the list is now NULL