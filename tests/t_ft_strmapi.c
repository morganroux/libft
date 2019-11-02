#include "t_libft.h"

char f(unsigned int i, char c)
{
	(void)i;
	return (c+1);
}

char g(unsigned int i, char c)
{
	(void)c;
	return (51+i);
}

int	t_ft_strmapi()
{
	char	*s = "01234";
	char	*ret;

	ret = ft_strmapi(s, &f);
	if(ft_strcmp(ret, "12345") != 0)
	{
		printf("%s\n", ret);
		return (1);
	}
	free(ret);
	ret = ft_strmapi(s, &g);
	if(ft_strcmp(ret, "34567") != 0)
	{
		printf("%s\n", ret);
		return (2);
	}

	free(ret);
	ret = ft_strmapi("", &g);
	if(ft_strcmp(ret, "") != 0)
	{
		printf("%s\n", ret);
		return (3);
	}

	return (0);
}
