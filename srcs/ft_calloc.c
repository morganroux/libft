#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	size_t	total;
	char	*ptr;

	total = size * count;
	if (!(ptr = (char *)malloc(total)))
		return (NULL);
	while (total-- > 0)
		*ptr++ = 0;
	return (ptr);
}
