#include "t_libft.h"

int	t_ft_lstclear()
{
	t_list	*list;

	list = ft_init_list(5);
	ft_lstclear(&list, &free);
	ft_lstclear(NULL, &free);
	return (0);
}
