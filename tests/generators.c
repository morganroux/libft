#include "t_libft.h"

unsigned char	gen_uchar(unsigned char start, unsigned char end)
{
	int	range;

	range = end - start + 1;
	return ((unsigned char) rand() % range + start);
}

size_t	gen_size_t(size_t start, size_t end)
{
	size_t	range;

	range = end - start + 1;
	return (rand() % range + start);
}

char	*gen_str(size_t len)
{
	unsigned char	*ret;
	size_t		i;

	i = 0;
	if (!(ret = malloc(len + 1)))
		return (NULL);
	while (i < len)
		ret[i++] = gen_uchar(1, 255);
	ret[len] = 0;
	return ((char *)ret);
}
