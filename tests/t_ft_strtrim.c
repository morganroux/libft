#include "t_libft.h"

int	t_ft_strtrim()
{
	int	r;
	char	*s;

	s = ft_strtrim("aaab daco kdaaabcca dd","ab cd");
	if ((r = ft_strcmp("o k", s) != 0))
	{
		printf("ok - %s\n", s);
		return (r);
	}
	
	return (0);
}

