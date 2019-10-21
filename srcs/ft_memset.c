#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	(void)c;
	str = (unsigned char *)b;
	while (len--)
		*str++  = (unsigned char)c;

	return (b);
}
