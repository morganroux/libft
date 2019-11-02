#include "t_libft.h"


int	t_ft_memmove()
{
	size_t	len;
	void	*b1;
	void	*b2;
	void	*r1;
	void	*r2;

	len = 12;
	b1 = (void *)malloc(sizeof(unsigned char) * len);
	b2 = (void *)malloc(sizeof(unsigned char) * len);
	strncpy(b1, "abcdefghijklmn", len);
	strncpy(b2, "abcdefghijklmn", len);
	r1 = ft_memmove(b1, (char *)b1 + 5, 7);
	r2 = memmove(b2, (char *)b2 + 5 , 7);
	printf("%.12s - %.12s \n%.12s - %.12s\n",
		(char *)b1, (char *)b2,
		(char *)r1, (char *)r2);

	if (memcmp(b1, b2, 12) != 0 || memcmp(r1, r2, 12) != 0)
		return (1);
	free(b1);
	free(b2);

	len = 12;
	b1 = (void *)malloc(sizeof(unsigned char) * len);
	b2 = (void *)malloc(sizeof(unsigned char) * len);
	strncpy(b1, "abcdefghijklmn", len);
	strncpy(b2, "abcdefghijklmn", len);
	r1 = ft_memmove((char *)b1 + 5, b1, 7);
	r2 = memmove((char *)b2 + 5, b2, 7);
	printf("%.12s - %.12s \n%.12s - %.12s\n",
		(char *)b1, (char *)b2,
		(char *)r1, (char *)r2);

	if (memcmp(b1, b2, 12) != 0 || memcmp(r1, r2, 7) != 0)
		return (2);
	free(b1);
	free(b2);

	len = 0;
	b1 = (void *)malloc(sizeof(unsigned char) * 12);
	b2 = (void *)malloc(sizeof(unsigned char) * 12);
	strncpy(b1, "abcdefghijklmn", 12);
	strncpy(b2, "abcdefghijklmn", 12);
	r1 = ft_memmove((char *)b1 + 5, b1, 0);
	r2 = memmove((char *)b2 + 5, b2, 0);
	printf("%.12s - %.12s \n%.12s - %.12s\n",
		(char *)b1, (char *)b2,
		(char *)r1, (char *)r2);

	if (memcmp(b1, b2, 12) != 0 || memcmp(r1, r2, 7) != 0)
		return (3);
	free(b1);
	free(b2);

	return (0);

}
