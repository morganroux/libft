#include "t_libft.h"

int	t_ft_lstadd_front()
{
	t_list	*ref;
	t_list	*list;

	ref = ft_lstnew("test");
	ref->next = ft_init_list(3);
	list = ft_init_list(3);
	ft_lstadd_front(&list, ft_lstnew("test"));
	if (ft_lstcmp(list, ref) != 0)
		return (1);
	ref = ft_init_list(1);
	list = NULL;
	ft_lstadd_front(&list, ft_lstnew("0"));
	if (ft_lstcmp(list, ref) != 0)
		return (2);
	return (0);
}
