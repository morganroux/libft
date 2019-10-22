#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*list;
	
	if (*alst == 0)
	{
		*alst = new;
		return ;
	}
	list = *alst;
	while (list->next != 0)
		list = list->next;
	list->next = new;
	return ;

}
