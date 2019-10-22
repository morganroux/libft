#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list	*list;

	if (lst == 0)
		return (0);
	list = lst;
	while (list->next != 0)
		list = list->next;
	return (list);
}
