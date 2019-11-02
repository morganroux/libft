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

int	t_strlen()
{
	char *s;

	s = malloc(1);
	*s = 0;
	printf("%lu - %lu\n", ft_strlen(s), strlen(s));
	if (ft_strlen(s) != strlen(s))
		return (1);
	s = malloc(2);
	strlcpy(s, "A", 2);
	printf("%lu - %lu\n", ft_strlen(s), strlen(s));
	if (ft_strlen(s) != strlen(s))
		return (2);
	s = malloc(2);
	strlcpy(s, "", 2);
	printf("%lu - %lu\n", ft_strlen(s), strlen(s));
	if (ft_strlen(s) != strlen(s))
		return (3);
	s = malloc(200);
	strlcpy(s, "Morgan", 200);
	printf("%lu - %lu\n", ft_strlen(s), strlen(s));
	if (ft_strlen(s) != strlen(s))
		return (4);
	return (0);
}


int	t_ft_strdup()
{
	if (strcmp(ft_strdup(""), "") != 0)
		return (1);
	if (strcmp(ft_strdup("abcde"), "abcde") != 0)
		return (1);
	return (0);
}

void	print_test(int r)
{
	if (r != 0)
	{
		printf(RED "FAIL %d\n" RESET, r);
		getchar();
	}
	else
		printf(GREEN "SUCCESS\n" RESET);
}

int	main()
{
	printf(SINGLELINE CYAN "ft_memset()" RESET SINGLELINE "\n");
	print_test(t_memset());
	printf(SINGLELINE CYAN "ft_bzero()" RESET SINGLELINE "\n");
	print_test(t_bzero());
	printf(SINGLELINE CYAN "ft_memcpy()" RESET SINGLELINE "\n");
	print_test(t_memcpy());
	printf(SINGLELINE CYAN "ft_memccpy()" RESET SINGLELINE "\n");
	print_test(t_memccpy());
	printf(SINGLELINE CYAN "ft_memmove()" RESET SINGLELINE "\n");
	print_test(t_memmove());
	printf(SINGLELINE CYAN "ft_memchr()" RESET SINGLELINE "\n");
	print_test(t_memchr());
	printf(SINGLELINE CYAN "ft_memcmp()" RESET SINGLELINE "\n");
	print_test(t_memcmp());
	printf(SINGLELINE CYAN "ft_strlen()" RESET SINGLELINE "\n");
	print_test(t_strlen());
	printf(SINGLELINE CYAN "ft_isalpha()" RESET SINGLELINE "\n");
	print_test(t_is_function(&ft_isalpha, &isalpha));
	printf(SINGLELINE CYAN "ft_isdigit()" RESET SINGLELINE "\n");
	print_test(t_is_function(&ft_isdigit, &isdigit));
	printf(SINGLELINE CYAN "ft_isalnum()" RESET SINGLELINE "\n");
	print_test(t_is_function(&ft_isalnum, &isalnum));
	printf(SINGLELINE CYAN "ft_isascii()" RESET SINGLELINE "\n");
	print_test(t_is_function(&ft_isascii, &isascii));
	printf(SINGLELINE CYAN "ft_isprint()" RESET SINGLELINE "\n");
	print_test(t_is_function(&ft_isprint, &isprint));
	printf(SINGLELINE CYAN "ft_toupper()" RESET SINGLELINE "\n");
	print_test(t_is_function(&ft_toupper, &toupper));
	printf(SINGLELINE CYAN "ft_tolower()" RESET SINGLELINE "\n");
	print_test(t_is_function(&ft_tolower, &tolower));
	printf(SINGLELINE CYAN "ft_strchr()" RESET SINGLELINE "\n");
	print_test(t_ft_strchr(&ft_strchr, strchr));
	printf(SINGLELINE CYAN "ft_strrchr()" RESET SINGLELINE "\n");
	print_test(t_ft_strchr(&ft_strrchr, &strrchr));
	printf(SINGLELINE CYAN "ft_strcmp()" RESET SINGLELINE "\n");
	print_test(t_ft_strcmp());
	printf(SINGLELINE CYAN "ft_strncmp()" RESET SINGLELINE "\n");
	print_test(t_ft_strncmp());
	printf(SINGLELINE CYAN "ft_strlcpy()" RESET SINGLELINE "\n");
	print_test(t_ft_str_cpycat(&ft_strlcpy, &strlcpy));
	printf(SINGLELINE CYAN "ft_strlcat()" RESET SINGLELINE "\n");
	print_test(t_ft_str_cpycat(&ft_strlcat, strlcat));
	printf(SINGLELINE CYAN "ft_strnstr()" RESET SINGLELINE "\n");
	print_test(t_ft_strnstr());	
	printf(SINGLELINE CYAN "ft_atoi()" RESET SINGLELINE "\n");
	print_test(t_ft_atoi());
	printf(SINGLELINE CYAN "ft_strdup()" RESET SINGLELINE "\n");
	print_test(t_ft_strdup());
	printf(SINGLELINE CYAN "ft_calloc()" RESET SINGLELINE "\n");
	print_test(t_ft_calloc());

	printf(LONGLINE CYAN "\nFonctions de base "\
		GREEN "OK\n" RESET LONGLINE"\n");

	printf(SINGLELINE CYAN "ft_substr()" RESET SINGLELINE "\n");
	print_test(t_ft_substr());
	printf(SINGLELINE CYAN "ft_strjoin()" RESET SINGLELINE "\n");
	print_test(t_ft_strjoin());
	printf(SINGLELINE CYAN "ft_strtrim" RESET SINGLELINE "\n");
	print_test(t_ft_strtrim());
		


	printf(SINGLELINE CYAN "ft_lstnew()" RESET SINGLELINE "\n");
	print_test(t_ft_lstnew());
	printf(SINGLELINE CYAN "ft_lstadd_front()" RESET SINGLELINE "\n");
	print_test(t_ft_lstadd_front());
	printf(SINGLELINE CYAN "ft_lstsize()" RESET SINGLELINE "\n");
	print_test(t_ft_lstsize());
	printf(SINGLELINE CYAN "ft_lstlast()" RESET SINGLELINE "\n");
	print_test(t_ft_lstlast());
	printf(SINGLELINE CYAN "ft_lstadd_back()" RESET SINGLELINE "\n");
	print_test(t_ft_lstadd_back());
	printf(SINGLELINE CYAN "ft_lstdelone()" RESET SINGLELINE "\n");
	print_test(t_ft_lstdelone());
	printf(SINGLELINE CYAN "ft_lstclear()" RESET SINGLELINE "\n");
	print_test(t_ft_lstclear());
	printf(SINGLELINE CYAN "ft_lstiter()" RESET SINGLELINE "\n");
	print_test(t_ft_lstiter());
	printf(SINGLELINE CYAN "ft_lstmap()" RESET SINGLELINE "\n");
	print_test(t_ft_lstmap());

	printf(LONGLINE CYAN "\nFonctions de listes "\
		GREEN "OK\n" RESET LONGLINE"\n");

	printf(SINGLELINE CYAN "ft_putchar_fd()" RESET SINGLELINE "\n");
	ft_putchar_fd('O', 1);
	ft_putchar_fd('K', 1);
	ft_putchar_fd('\n', 1);
	printf(SINGLELINE CYAN "ft_putstr_fd()" RESET SINGLELINE "\n");
	ft_putstr_fd("SUCCESS\n", 1);
	printf(SINGLELINE CYAN "ft_putendl_fd()" RESET SINGLELINE "\n");
	ft_putendl_fd("SUCCESS", 1);
	printf(SINGLELINE CYAN "ft_putnbr_fd()" RESET SINGLELINE "\n");
	t_ft_putnbr_fd();


	return (0);
}
