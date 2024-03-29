#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	if (*str == (char)c)
		return (str);
	while (*str++ != 0)
	{
		if (*str == (char)c)
			return (str);
	}
	return (NULL);
}
