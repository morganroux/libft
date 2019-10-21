#include "libft.h"
#include "t_libft.h"

int	t_memset()
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


int	t_bzero()
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

int	t_memcpy()
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

int	t_memccpy()
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

int	t_memmove()
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

int	t_memchr()
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

int	t_memcmp()
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

void	print_test(int r)
{
	if (r != 0)
		printf(RED "FAIL %d\n" RESET, r);
	else
		printf(GREEN "SUCCESS\n" RESET);
}

int	main()
{
	printf(DOUBLELINE CYAN "ft_memset()" RESET DOUBLELINE "\n");
	print_test(t_memset());
	printf(DOUBLELINE CYAN "ft_bzero()" RESET DOUBLELINE "\n");
	print_test(t_bzero());
	printf(DOUBLELINE CYAN "ft_memcpy()" RESET DOUBLELINE "\n");
	print_test(t_memcpy());
	printf(DOUBLELINE CYAN "ft_memccpy()" RESET DOUBLELINE "\n");
	print_test(t_memccpy());
	printf(DOUBLELINE CYAN "ft_memmove()" RESET DOUBLELINE "\n");
	print_test(t_memmove());
	printf(DOUBLELINE CYAN "ft_memchr()" RESET DOUBLELINE "\n");
	print_test(t_memchr());
	printf(DOUBLELINE CYAN "ft_memcmp()" RESET DOUBLELINE "\n");
	print_test(t_memcmp());

	return (0);
}
