#include "t_libft.h"


int	t_ft_memccpy()
{
	size_t	len;
	void	*b1;
	void	*b2;
	void	*r1;
	void	*r2;

	len = 10;
	b1 = (void *)malloc(sizeof(unsigned char) * len);
	b2 = (void *)malloc(sizeof(unsigned char) * len);
	strncpy(b1, "0000000000000000000000000000000", len);
	strncpy(b2, "0000000000000000000000000000000", len);
	r1 = ft_memccpy(b1, "abcdefgh", 'e', len);
	r2 = memccpy(b2, "abcdefgh", 'e', len);
	printf("%.4s - %.4s \n%.4s - %.4s\n",
		(char *)b1, (char *)b2,
		(char *)r1, (char *)r2);

	if (memcmp(b1, b2, 4) != 0 || memcmp(r1, r2, 4) != 0)
		return (1);
	free(b1);
	free(b2);
	
	len = 10;
	b1 = (void *)malloc(sizeof(unsigned char) * len);
	b2 = (void *)malloc(sizeof(unsigned char) * len);
	strncpy(b1, "0000000000000000000000000000000", len);
	strncpy(b2, "0000000000000000000000000000000", len);
	r1 = ft_memccpy(b1, "abcdefgh", 'i', len);
	r2 = memccpy(b2, "abcdefgh", 'i', len);
	
	printf("%.8s - %.8s \n%.8s - %.8s\n",
		(char *)b1, (char *)b2,
		(char *)r1, (char *)r2);
	if (memcmp(b1, b2, 4) != 0 || r1 != NULL)
		return (2);
	free(b1);
	free(b2);

	return (0);

}
