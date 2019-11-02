#include "t_libft.h"

int	t_ft_lstsize()
{
	t_list	*list;

	list = ft_init_list(4);
	if (ft_lstsize(list) != 4)
		return (1);
	if(ft_lstsize(NULL) != 0)
		return (1);
	return (0);
}
