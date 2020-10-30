#include "libft.h"
/*
** Iterates the list ’lst’ and applies the function
** ’f’ to the content of each element. Creates a new
** list resulting of the successive applications of
** the function ’f’. The ’del’ function is used to
** delete the content of an element if needed.
** Returns pointer to new list ot NULL if malloc fails.
*/

t_list      *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *head;
    t_list *node;

    if (!lst || !f || !del)
        return (NULL);
    head = ft_lstnew(f(lst->content));
    if (!head)
		return (NULL);
    node = head;
    lst = lst->next;
    while (lst)
    {
        node->next = ft_lstnew(f(lst->content));
        if (!(node->next))
        {
            ft_lstclear(&head, del);
            return (NULL);
        }
        node = node->next;
        lst = lst->next;
    }
    return (head);
}