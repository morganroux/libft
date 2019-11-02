#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;

	ret = NULL;
	if (*s == (char)c)
		ret = (char *)s;
	while (*s++ != 0)
	{
		if (*s == (char)c)
			ret = (char *)s;
	}
	return (ret);
}
