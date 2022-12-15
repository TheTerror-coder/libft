#include<stdlib.h>
#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (*lst != NULL)
	{
		del((*lst)->content);
		if (((*lst)->next) != NULL)
			ft_lstclear(&((*lst)->next), del);
	}
	free(*lst);
	*lst = NULL;
}
