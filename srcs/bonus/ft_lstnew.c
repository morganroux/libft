#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*list;

	if (!(list = (t_list *) malloc(sizeof(t_list))))
		return (0);
	list->content = content;
	list->next = 0;
	return (list);
}
