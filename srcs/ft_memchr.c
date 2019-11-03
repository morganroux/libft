#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	*s;
	size_t		i;

	i = 0;
	s = (unsigned char *) src;
	while (n--)
	{
		if (*s == (unsigned char)c)
			return (s);
		s++;
	}
	return (NULL);
}
