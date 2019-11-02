#include "t_libft.h"


int	t_ft_memset()
{
	size_t	len;
	int	c;
	void	*b1;
	void	*b2;

	c = 70;
	len = 10;
	b1 = (void *)malloc(sizeof(unsigned char) * len);
	b2 = (void *)malloc(sizeof(unsigned char) * len);

	if (memcmp(ft_memset(b1, c, len), memset(b2, c, len), len) != 0)
		return (1);
	free(b1);
	free(b2);

	c = 200;
	len = 10;
	b1 = (void *)malloc(sizeof(unsigned char) * len);
	b2 = (void *)malloc(sizeof(unsigned char) * len);

	if (memcmp(ft_memset(b1, c, len), memset(b2, c, len), len) != 0)
		return (2);
	free(b1);
	free(b2);

	c = 200;
	len = 0;
	b1 = (void *)malloc(sizeof(unsigned char) * 5);
	b2 = (void *)malloc(sizeof(unsigned char) * 5);
	
	strcpy(b1, "hey");
	strcpy(b2, "hey");
	if (memcmp(ft_memset(b1, c, len), memset(b2, c, len), len) != 0)
		return (3);
	free(b1);
	free(b2);
	
	return (0);
}


