#include "libft.h"

int ft_strequ(char const *s1, char const *s2)
{
	if (s1 == 0 || s2 == 0)
		return (0);
	while (*s1 != 0 || *s2 != 0)
	{
		if (*s1++ != *s2++)
			return (0);
	}
	return (1);
}
