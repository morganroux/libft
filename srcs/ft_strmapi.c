#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		len;
	char		*ret;
	unsigned int	i;

	i = 0;
	len = ft_strlen(s);
	if (!(ret = (char *) malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (i < len )
		*ret++ = (*f)(i++, *s++);
	ret[i] = 0;
	return (ret);
}
