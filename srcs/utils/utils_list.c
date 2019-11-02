#include "t_libft.h"

t_list	*ft_init_list(size_t n)
{
	size_t	i;
	t_list	*list, *ret;
	
	i = 1;
	if (n == 0)
		return (NULL);
	ret = ft_lstnew(ft_strdup("0"));
	list = ret;
	while (i < n)
	{
		list->next = ft_lstnew(ft_strdup(ft_itoa(i)));
		list = list->next;
		i++;
	}
	return (ret);
}

t_list	*ft_create_list(int num, ...)
{
	int	i;
	t_list	*ret;
	t_list	*list;
	va_list	valist;

	va_start(valist, num);
	i = 1;
	if (num == 0)
		return (NULL);
	ret = ft_lstnew(ft_strdup(va_arg(valist, const char *)));
	list = ret;
	while (i < num)
	{
		list->next = ft_lstnew(ft_strdup(va_arg(valist, const char *)));
		list = list->next;
		i++;
	}
	va_end(valist);
	return (ret);

	
}

void	ft_print_list(t_list *list)
{
	while(list != NULL)
	{
		printf("%s\n", (char *)list->content);
		list = list->next;
	}
}

int	ft_lstcmp(t_list *list1, t_list *list2)
{
	t_list	*l1;
	t_list	*l2;

	l1 = list1;
	l2 = list2;
	while (l1 != NULL && l2 != NULL)
	{
		if (ft_strcmp(l1->content, l2->content) != 0)
			return (-1);
		l1 = l1->next;
		l2 = l2->next;
	}
	if (l1 == NULL && l2 == NULL)
		return (0);
	return (-1);
}
