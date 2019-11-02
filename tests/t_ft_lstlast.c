#include "t_libft.h"

int	t_ft_lstlast()
{
	t_list	*list;
	t_list	*test;
	
	if (ft_lstlast(NULL) != NULL)
		return (1);
	test = ft_lstnew("0");
	list = ft_init_list(1);
	if (ft_lstcmp(test, ft_lstlast(list)) != 0)
		return (2);
	test = ft_lstnew("3");
	list = ft_init_list(4);
	if (ft_lstcmp(test, ft_lstlast(list)) != 0)
		return (3);
	return (0);
}
