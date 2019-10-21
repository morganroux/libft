#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;
	char	*buf;
	size_t	i;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if(!(buf = (char *)malloc(sizeof(char) * n)))
		return (NULL);
	while (i < n)
	{
		buf[i] = s[i];
		i++;
	}
	
	i = 0;
	while (i < n)
	{
		d[i] = buf[i];
		i++;
	}
	free(buf);
	return (dst);
}
