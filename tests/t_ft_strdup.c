#include "t_libft.h"


int	t_ft_strdup()
{
	if (strcmp(ft_strdup(""), "") != 0)
		return (1);
	if (strcmp(ft_strdup("abcde"), "abcde") != 0)
		return (1);
	return (0);
}
