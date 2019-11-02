#include "t_libft.h"


int	t_ft_memcpy()
{
	size_t	len;
	void	*b1;
	void	*b2;

	len = 5;
	b1 = (void *)malloc(sizeof(unsigned char) * (len + 1));
	b2 = (void *)malloc(sizeof(unsigned char) * (len + 1));

	strncpy(b1, "0000000000000000000000000000000", len + 1);
	strncpy(b2, "0000000000000000000000000000000", len + 1);
	ft_memcpy(b1, "Hello", len);
	memcpy(b2, "Hello", len);
	printf("%.6s - %.6s \n", (char *)b1, (char *)b2);
	if (memcmp(b1, b2, len + 1) != 0)
		return (1);
	free(b1);
	free(b2);

	len = 0;
	b1 = (void *)malloc(sizeof(unsigned char) * 5);
	b2 = (void *)malloc(sizeof(unsigned char) * 5);

	strncpy(b1, "0000000000000000000000000000000", 5);
	strncpy(b2, "0000000000000000000000000000000", 5);
	ft_memcpy(b1, "Hello", len);
	memcpy(b2, "Hello", len);
	printf("%.6s - %.6s \n", (char *)b1, (char *)b2);
	if (memcmp(b1, b2, 5) != 0)
		return (2);
	free(b1);
	free(b2);

	return (0);

}
