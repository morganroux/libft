#include "libft.h"
#include <stdio.h>

int	find(char s, const char *set)
{	
	int	i;

	i = 0;
	while (set[i] != 0)
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char 	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	len;

	i= 0;
	while (find(s1[i], set) == 1)
		i++;
	start = i;
	while (s1[i] != 0)
		i++;
	i--;
	while (find(s1[i], set) == 1)
		i--;
	len = i - start + 1;
	return (ft_substr(s1, start, len));
}
