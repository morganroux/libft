#include "t_libft.h"

void	*add_map(void *content)
{
	int	*i;
	i = (int *) content;
	*i = *i + 3;
	return ((void *) i);
}

int	t_ft_lstmap()
{
	t_list	*list;
	t_list	*ref;

	ref = ft_create_list(3, "3", "4", "5");
	list = ft_init_list(3);
	list = ft_lstmap(list, &add_map, &free);
	if (ft_lstcmp(ref,list) != 0)
		return (1);
	
	return (0);
}
