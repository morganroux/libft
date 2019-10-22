#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub;
	size_t		l;
	size_t		n_copy;

	l = strlen(s);
	if (start >= l)
	{
		if(!(sub = (char *) malloc(1 * sizeof(char))))
			return (NULL);
		sub[0] = 0;
		return (sub);
	}

	if (start + l < len)
		n_copy = start + l;
	else
		n_copy = len;
	if (!(sub = (char *) malloc((n_copy + 1) * sizeof(char))))
		return (NULL);
	while (n_copy-- > 0)
		*sub++ = *(s++ + start);
	*sub = 0;
	return (sub);
}
