#include "t_libft.h"


int	t_ft_bzero()
{
	size_t	len;
	void	*b1;
	void	*b2;

	len = 10;
	b1 = (void *)malloc(sizeof(unsigned char) * len);
	b2 = (void *)malloc(sizeof(unsigned char) * len);

	strcpy(b1, "hey");
	strcpy(b2, "hey");
	ft_bzero(b1, len);
	bzero(b2, len);
	if (memcmp(b1, b2, len) != 0)
		return (1);
	free(b1);
	free(b2);

	len = 0;
	b1 = (void *)malloc(sizeof(unsigned char) * 5);
	b2 = (void *)malloc(sizeof(unsigned char) * 5);
	
	strcpy(b1, "hey");
	strcpy(b2, "hey");
	ft_bzero(b1, len);
	bzero(b2, len);
	if (memcmp(b1, b2, len) != 0)
		return (2);
	free(b1);
	free(b2);

	return (0);

}
