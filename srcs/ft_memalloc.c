#include "libft.h"


void	*ft_memalloc(size_t size)
{
	unsigned char	*mem;
	size_t		i;

	i = 0;
	if (!(mem = (unsigned char *)malloc(size)))
	{
		return NULL;
	}
	while (i < size)
		mem[i++] = 0;
	return (void *)mem;
}
