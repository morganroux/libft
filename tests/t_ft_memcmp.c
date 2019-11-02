#include "t_libft.h"


int	t_ft_memcmp()
{
	size_t	len;
	void	*b1;
	void	*b2;

	len = 12;
	b1 = (void *)malloc(sizeof(unsigned char) * len);
	b2 = (void *)malloc(sizeof(unsigned char) * len);
	strncpy(b1, "abcdefghijklmn", len);
	strncpy(b2, "abcdefghijklmn", len);
	printf("%d - %d \n", memcmp(b1, b2, 12), ft_memcmp(b1, b2, 12));
	if (memcmp(b1, b2, 12) != ft_memcmp(b1, b2, 12))
		return (1);
	
	memcpy(b1 + 6, "\200", 1);
	memcpy(b2 + 6, "\2", 1);
	printf("%d - %d \n", memcmp(b1, b2, 12), ft_memcmp(b1, b2, 12));

	if (memcmp(b1, b2, 12) != ft_memcmp(b1, b2, 12))
		return (2);

	printf("%d - %d \n", memcmp(b1, b2, 0), ft_memcmp(b1, b2, 0));
	if (memcmp(b1, b2, 0) != ft_memcmp(b1, b2, 0))
		return (3);

	free(b1);
	free(b2);

	return (0);

}
