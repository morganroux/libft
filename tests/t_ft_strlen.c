#include "t_libft.h"


int	t_ft_strlen()
{
	char *s;

	s = malloc(1);
	*s = 0;
	printf("%lu - %lu\n", ft_strlen(s), strlen(s));
	if (ft_strlen(s) != strlen(s))
		return (1);
	s = malloc(2);
	strlcpy(s, "A", 2);
	printf("%lu - %lu\n", ft_strlen(s), strlen(s));
	if (ft_strlen(s) != strlen(s))
		return (2);
	s = malloc(2);
	strlcpy(s, "", 2);
	printf("%lu - %lu\n", ft_strlen(s), strlen(s));
	if (ft_strlen(s) != strlen(s))
		return (3);
	s = malloc(200);
	strlcpy(s, "Morgan", 200);
	printf("%lu - %lu\n", ft_strlen(s), strlen(s));
	if (ft_strlen(s) != strlen(s))
		return (4);
	return (0);
}
