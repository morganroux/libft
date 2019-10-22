#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;
	t_list	*prev;

	list = *lst;
	while (list != 0)
	{
		prev = list;
		list = list->next;
		ft_lstdelone(prev, del);
	}
	*lst = 0;
}
