#include "t_libft.h"

int	t_ft_substr()
{
	char		*s;
	unsigned int	i;
	size_t		len;

	i = 4;
	s = strdup("Ceciestunessai");
	len = 3;
	if (ft_strcmp(ft_substr(s, i, len), "est")!= 0)
	{
		printf("%s",ft_substr(s, i, len));
		return (1);
	}
	i = 4;
	s = strdup("Ceciestunessai");
	len = 11;
	if (ft_strcmp(ft_substr(s, i, len), "estunessai")!= 0)
	{
		printf("%s",ft_substr(s, i, len));
		return (2);
	}

	i = 0;
	s = strdup("Ceciestunessai");
	len = 3;
	if (ft_strcmp(ft_substr(s, i, len), "Cec")!= 0)
	{
		printf("%s",ft_substr(s, i, len));
		return (3);
	}

	i = 4;
	s = strdup("Ceciestunessai");
	len = 0;
	if (ft_strcmp(ft_substr(s, i, len), "")!= 0)
	{
		printf("%s",ft_substr(s, i, len));
		return (4);
	}

	i = 4;
	s = strdup("Ceciestunessai");
	len = 10;
	if (ft_strcmp(ft_substr(s, i, len), "estunessai")!= 0)
		return (5);
	i = 20;
	s = strdup("Ceciestunessai");
	len = 10;
	if (ft_strcmp(ft_substr(s, i, len), "")!= 0)
		return (6);
	
	return (0);
}
