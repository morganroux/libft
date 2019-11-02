#include "t_libft.h"

void	add(void *content)
{
	int	*i;
	i = (int *) content;
	*i = *i + 3;
}

int	t_ft_lstiter()
{
	t_list	*list;
	t_list	*ref;

	ref = ft_create_list(3, "3", "4", "5");
	list = ft_init_list(3);
	ft_lstiter(list, &add);
	if (ft_lstcmp(ref,list) != 0)
		return (1);
	return (0);
}
