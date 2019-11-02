#include "t_libft.h"

int	t_ft_strchr(char *(*t_f)(const char *, int), char *(*f)(const char *, int))
{
	int	i;
	char	*str;
	size_t	len;
	char	c;

	i = 0;
	len = 6;
	str = gen_str(len);
	c = 0;
	if (ft_strcmp(t_f(str,c), f(str, c)) != 0)
	{
		printf("%s - %s", t_f(str,c), f(str, c));
		return (1);
	}
	free(str);

	while (i++ < 1000)
	{
		len = gen_size_t(10, 30);
		str = gen_str(len);
		c = (int) gen_uchar(0, 255);

	//	printf("%s - %s\n", t_f(str,c), f(str, c));
		if (ft_strcmp(t_f(str,c), f(str, c)) != 0)
		{
			printf("%s - %s\n", t_f(str,c), f(str, c));
			return (1);
		}
		free(str);
	}	
	return (0);
}
