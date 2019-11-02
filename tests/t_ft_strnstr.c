#include "t_libft.h"

int	t_ft_strnstr()
{
	char	*s1;
	char	*s2;
	size_t	len, n;
	int	i;
	
	n = 0;
	while (n < 20)
	{
		s1 = strdup("ceciestuntest");
		s2 = strdup("une");
	//	printf("%s - %s\n",ft_strnstr(s1, s2, n), strnstr(s1, s2, n));
		if (ft_strcmp(ft_strnstr(s1, s2, n), strnstr(s1, s2, n)) != 0)
			return (1);
		free(s1);
		free(s2);
		n++;
	}

	n = 0;
	while (n < 20)
	{
		s1 = strdup("ceciestuntest");
		s2 = strdup("un");
	//	printf("%s - %s\n",ft_strnstr(s1, s2, n), strnstr(s1, s2, n));
		if (ft_strcmp(ft_strnstr(s1, s2, n), strnstr(s1, s2, n)) != 0)
			return (2);
		free(s1);
		free(s2);
		n++;
	}
	i = 0;
	while (i < 1000)
	{
		len = gen_size_t(0, 10);
		s1 = gen_str(gen_size_t(0,10));
		s2 = gen_str(len);
		n = gen_size_t(0, len);
	//	printf("%s - %s\n",ft_strnstr(s1, s2, n), strnstr(s1, s2, n));
		if (ft_strcmp(ft_strnstr(s1, s2, n), strnstr(s1, s2, n)) != 0)
			return (3);
		free(s1);
		free(s2);
		i++;
	}
	return (0);
}
