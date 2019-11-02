#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	char	*ptr;
	size_t	i;

	i = 0;
	total = size * count;
	if (!(ptr = (char *)malloc(total)))
		return (NULL);
	while (i < total)
		ptr[i++] = 0;
	return (ptr);
}
