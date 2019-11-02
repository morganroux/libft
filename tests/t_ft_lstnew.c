#include "t_libft.h"

int	t_ft_lstnew()
{
	t_list	*list;

	list = ft_lstnew("test");
	if (ft_strcmp(list->content, "test") != 0)
		return (1);
	return (0);
}
