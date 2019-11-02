#include "t_libft.h"


int	t_ft_memchr()
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
	r1 = ft_memchr((char *)b1, 'a', len);
	r2 = memchr((char *)b2, 'a', len);
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
	memcpy(b1 + 6, "\200", 1);
	memcpy(b2 + 6, "\200", 1);
	r1 = ft_memchr((char *)b1, '\200', len);
	r2 = memchr((char *)b2, '\200', len);
	printf("%.12s - %.12s \n%.12s - %.12s\n",
		(char *)b1, (char *)b2,
		(char *)r1, (char *)r2);

	if (memcmp(b1, b2, 12) != 0 || memcmp(r1, r2, 6 ) != 0)
		return (2);
	free(b1);
	free(b2);

	len = 12;
	b1 = (void *)malloc(sizeof(unsigned char) * len);
	b2 = (void *)malloc(sizeof(unsigned char) * len);
	strncpy(b1, "abcdefghijklmn", len);
	strncpy(b2, "abcdefghijklmn", len);
	memcpy(b1 + 6, "\200", 1);
	memcpy(b2 + 6, "\200", 1);
	r1 = ft_memchr((char *)b1, '\200', 0);
	r2 = memchr((char *)b2, '\200', 0);
	printf("%.12s - %.12s \n%.12s - %.12s\n",
		(char *)b1, (char *)b2,
		(char *)r1, (char *)r2);

	if (memcmp(b1, b2, 12) != 0 || r1 != NULL)
		return (3);
	free(b1);
	free(b2);
	return (0);

}
