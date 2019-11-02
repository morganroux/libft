#include "t_libft.h"

int	t_ft_lstdelone()
{
	t_list	*list;
	t_list	*l;

	list = ft_init_list(5);
	l = list->next;
	l = l->next;
	ft_lstdelone(l,&free);
	return (0);
}
