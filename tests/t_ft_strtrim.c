#include "t_libft.h"

int	t_ft_strtrim()
{
	int	r;
	char	*s;

	s = ft_strtrim("aaab daco kdaaabcca dd","ab cd");
	if ((r = ft_strcmp("o k", s) != 0))
	{
		printf("o k - %s\n", s);
		return (r);
	}
	free(s);

	s = ft_strtrim("test","");
	if ((r = ft_strcmp("test", s) != 0))
	{
		printf("test - %s\n", s);
		return (r);
	}

	free(s);
	s = ft_strtrim("","ihzgedih");
	if ((r = ft_strcmp("", s) != 0))
	{
		printf("test - %s\n", s);
		return (r);
	}

	free(s);
	s = ft_strtrim("","");
	if ((r = ft_strcmp("", s) != 0))
	{
		printf(" - %s\n", s);
		return (r);
	}

	return (0);
}

