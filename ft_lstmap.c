#include<stdlib.h>
#include "libft.h"

t_list	*ft_add_el(t_list *inter, void *cont)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if(!list)
		return (NULL);
	list = NULL;
	list->content = cont;
	list->next = inter;
	return (list);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*inter;

	inter = NULL;
	while (lst->next != NULL)
	{
		inter = ft_add_el(inter, f(lst->content));
		lst = lst->next;
	}
	return (inter);
}
