#include "libft.h"

void ft_lstadd_front(t_list **alst, t_list *new)
{
	if (*alst == 0)
	{
		*alst = new;
		return ;
	}
	new->next = *alst;
	*alst = new;
	return ;
}
