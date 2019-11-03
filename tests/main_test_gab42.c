#include "libft.h"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <stdarg.h>

int	test_memset(void)
{
	void 	*s1;
	void 	*s2;
	int	n;
	int	c;

	n = 20;
	c = '0';
	s1 = (void *)malloc(sizeof(unsigned char) * n);
	s2 = (void *)malloc(sizeof(unsigned char) * n);
	if (memcmp(ft_memset(s1, c, n), memset(s2, c, n), n))
		return (1);
	n = 0;
	c = '1';
	if (memcmp(ft_memset(s1, c, n), memset(s2, c, n), 1))
		return (2);
	free(s1);
	free(s2);
	n = 50;
	c = 500;
	s1 = (void *)malloc(sizeof(unsigned char) * n);
	s2 = (void *)malloc(sizeof(unsigned char) * n);
	if (memcmp(ft_memset(s1, c, n), memset(s2, c, n), n))
		return (3);
	free(s1);
	free(s2);
	n = 50;
	c = 500;
	s1 = (void *)malloc(sizeof(unsigned char) * n);
	s2 = (void *)malloc(sizeof(unsigned char) * n);
	strcpy(s1, "sex");
	strcpy(s2, "sex");
	if (memcmp(ft_memset(s1, c, n), memset(s2, c, n), n))
		return (4);
	free(s1);
	free(s2);
	return (0);
}

int	test_bzero(void)
{
	void 	*s1;
	void 	*s2;
	int	n;

	n = 20;
	s1 = (void *)malloc(sizeof(unsigned char) * n);
	s2 = (void *)malloc(sizeof(unsigned char) * n);
	ft_bzero(s1, n);
	ft_bzero(s2, n);
	if (memcmp(s1, s2, n))
		return (1);
	free(s1);
	free(s2);
	n = 0;
	s1 = (void *)malloc(sizeof(unsigned char) * 5);
	s2 = (void *)malloc(sizeof(unsigned char) * 5);
	ft_bzero(s1, n);
	ft_bzero(s2, n);
	if (memcmp(s1, s2, n))
		return (2);
	free(s1);
	free(s2);
	n = 20;
	s1 = (void *)malloc(sizeof(unsigned char) * n);
	s2 = (void *)malloc(sizeof(unsigned char) * n);
	strcpy(s1, "sex");
	strcpy(s2, "sex");
	ft_bzero(s1, n);
	ft_bzero(s2, n);
	if (memcmp(s1, s2, n))
		return (3);
	free(s1);
	free(s2);
	return (0);	
}

int	test_memcpy(void)
{
	void 	*s1;
	void 	*s2;
	void	*s3;
	void	*s4;
	int	n;

	n = 20;
	s1 = (void *)malloc(sizeof(unsigned char) * n);
	s2 = (void *)malloc(sizeof(unsigned char) * n);
	s3 = (void *)malloc(sizeof(unsigned char) * n);
	s4 = (void *)malloc(sizeof(unsigned char) * n);
	s1 = memset(s1, 48, n);
	s2 = memset(s2, 48, n);
	s3 = memset(s3, 49, n);
	s4 = memset(s4, 49, n);
	if (memcmp(ft_memcpy(s1, s3, n), memcpy(s2, s4, n), n))
		return (1);
	free(s1);
	free(s2);
	free(s3);
	free(s4);
	n = 20;
	s1 = (void *)malloc(sizeof(unsigned char) * n);
	s2 = (void *)malloc(sizeof(unsigned char) * n);
	s3 = (void *)malloc(sizeof(unsigned char) * n);
	s4 = (void *)malloc(sizeof(unsigned char) * n);
	s1 = memset(s1, 48, n);
	s2 = memset(s2, 48, n);
	s3 = memset(s3, 49, n);
	s4 = memset(s4, 49, n);
	if (memcmp(ft_memcpy(s1, s3, n / 2), memcpy(s2, s4, n / 2), n))
		return (2);
	free(s1);
	free(s2);
	free(s3);
	free(s4);
	n = 20;
	s1 = (void *)malloc(sizeof(unsigned char) * n);
	s2 = (void *)malloc(sizeof(unsigned char) * n);
	s3 = (void *)malloc(sizeof(unsigned char) * n);
	s4 = (void *)malloc(sizeof(unsigned char) * n);
	s1 = memset(s1, 48, n);
	s2 = memset(s2, 48, n);
	s3 = memset(s3, 49, n);
	s4 = memset(s4, 49, n);
	if (memcmp(ft_memcpy(s1, s3, 0), memcpy(s2, s4, 0), n))
		return (3);
	free(s1);
	free(s2);
	free(s3);
	free(s4);
	n = 20;
	s1 = (void *)malloc(sizeof(unsigned char) * n);
	s2 = (void *)malloc(sizeof(unsigned char) * n);
	s3 = (void *)malloc(sizeof(unsigned char) * n);
	s4 = (void *)malloc(sizeof(unsigned char) * n);
	s1 = memset(s1, 48, n);
	s2 = memset(s2, 48, n);
	s3 = memset(s3, 49, n);
	s4 = memset(s4, 49, n);
	if (memcmp(ft_memcpy(s1, s3, n + 1), memcpy(s2, s4, n + 1), n + 1))
		return (4);
	free(s1);
	free(s2);
	free(s3);
	free(s4);
	return (0);
}

int	test_memccpy(void)
{
	void *s1;
	void *s2;
	int n;

	n = 20;
	s1 = (void *)malloc(sizeof(unsigned char) * n);
	s2 = (void *)malloc(sizeof(unsigned char) * n);
	memset(s1, 48, n);
	memset(s2, 48, n);
	ft_memccpy(s1, "123456789", '6', n);
	memccpy(s2, "123456789", '6', n);
	if (memcmp(s1, s2, n))
		return (1);
	free(s1);
	free(s2);
	n = 20;
	s1 = (void *)malloc(sizeof(unsigned char) * n);
	s2 = (void *)malloc(sizeof(unsigned char) * n);
	memset(s1, 48, n);
	memset(s2, 48, n);
	ft_memccpy(s1, "123456789", '6', 0);
	memccpy(s2, "123456789", '6', 0);
	if (memcmp(s1, s2, n))
		return (2);
	free(s1);
	free(s2);
	n = 20;
	s1 = (void *)malloc(sizeof(unsigned char) * n);
	s2 = (void *)malloc(sizeof(unsigned char) * n);
	memset(s1, 48, n);
	memset(s2, 48, n);
	ft_memccpy(s1, "123456789", '6', 5);
	memccpy(s2, "123456789", '6', 5);
	if (memcmp(s1, s2, n))
		return (3);
	free(s1);
	free(s2);
	n = 20;
	s1 = (void *)malloc(sizeof(unsigned char) * n);
	s2 = (void *)malloc(sizeof(unsigned char) * n);
	memset(s1, 48, n);
	memset(s2, 48, n);
	ft_memccpy(s1, "123456789", 'a', n);
	memccpy(s2, "123456789", 'a', n);
	if (memcmp(s1, s2, n))
		return (4);
	free(s1);
	free(s2);
	n = 20;
	s1 = (void *)malloc(sizeof(unsigned char) * n);
	s2 = (void *)malloc(sizeof(unsigned char) * n);
	memset(s1, 48, n);
	memset(s2, 48, n);
	ft_memccpy(s1, "123456789", '1', n);
	memccpy(s2, "123456789", '1', n);
	if (memcmp(s1, s2, n))
		return (5);
	free(s1);
	free(s2);
	n = 20;
	s1 = (void *)malloc(sizeof(unsigned char) * n);
	s2 = (void *)malloc(sizeof(unsigned char) * n);
	memset(s1, 48, n);
	memset(s2, 48, n);
	ft_memccpy(s1, "123456789", 0, n);
	memccpy(s2, "123456789", 0, n);
	if (memcmp(s1, s2, n))
		return (6);
	free(s1);
	free(s2);
	return (0);
}

int	test_memmove(void)
{
	void *s1;
	void *s2;
	int n;

	n = 6;
	s1 = (void *)malloc(sizeof(unsigned char) * n);
	s2 = (void *)malloc(sizeof(unsigned char) * n);
	memset(s1, 48, n);
	memset(s2, 48, n);
	if (memcmp(ft_memmove(s1, "12345", n), memmove(s2, "12345", n), n))
		return (1);
	free(s1);
	free(s2);
	n = 6;
	s1 = (void *)malloc(sizeof(unsigned char) * n);
	s2 = (void *)malloc(sizeof(unsigned char) * n);
	memset(s1, 48, n);
	memset(s2, 48, n);
	if (memcmp(ft_memmove(s1, "12345", 0), memmove(s2, "12345", 0), n))
		return (2);
	free(s1);
	free(s2);
	n = 6;
	s1 = (void *)malloc(sizeof(unsigned char) * n);
	s2 = (void *)malloc(sizeof(unsigned char) * n);
	memset(s1, 48, n);
	memset(s2, 48, n);
	if (memcmp(ft_memmove(s1, "12345", 1), memmove(s2, "12345", 1), n))
		return (3);
	free(s1);
	free(s2);
	n = 6;
	s1 = (void *)malloc(sizeof(unsigned char) * n);
	s2 = (void *)malloc(sizeof(unsigned char) * n);
	memset(s1, 48, n);
	memset(s2, 48, n);
	if (memcmp(ft_memmove(s1, "12345", 4), memmove(s2, "12345", 4), n))
		return (4);
	free(s1);
	free(s2);
	n = 6;
	s1 = (void *)malloc(sizeof(unsigned char) * n);
	s2 = (void *)malloc(sizeof(unsigned char) * n);
	memset(s1, 48, n);
	memset(s2, 48, n);
	if (memcmp(ft_memmove(s1, "", n), memmove(s2, "", n), n))
		return (5);
	free(s1);
	free(s2);
	return (0);
}

int	test_memchr(void)
{
	void 	*s1;
	void 	*s2;
	size_t 	n;

	n = 11;
	s1 = (void *)malloc(sizeof(unsigned char) * n);
	s2 = (void *)malloc(sizeof(unsigned char) * n);
	memcpy(s1, "123456789", n);
	memcpy(s2, "123456789", n);
	memcpy(s1, ft_memchr(s1, '5', n), n);
	memcpy(s2, memchr(s2, '5', n), n);
	if (memcmp(s1, s2, n))
		return (1);
	free(s1);
	free(s2);
	n = 11;
	s1 = (void *)malloc(sizeof(unsigned char) * n);
	s2 = (void *)malloc(sizeof(unsigned char) * n);
	memcpy(s1, "123456789", n);
	memcpy(s2, "123456789", n);
	s1 = ft_memchr(s1, '5', 0);
	s2 = memchr(s2, '5', 0);
	if (s1 != s2)
		return (2);
	free(s1);
	free(s2);
	n = 11;
	s1 = (void *)malloc(sizeof(unsigned char) * n);
	s2 = (void *)malloc(sizeof(unsigned char) * n);
	memcpy(s1, "123456789", n);
	memcpy(s2, "123456789", n);
	s1 = ft_memchr(s1, 'x', n);
	s2 = memchr(s2, 'x', n);
	if (s1 != s2)
		return (3);
	free(s1);
	free(s2);
	n = 11;
	s1 = (void *)malloc(sizeof(unsigned char) * n);
	s2 = (void *)malloc(sizeof(unsigned char) * n);
	memcpy(s1, "123456789", n);
	memcpy(s2, "123456789", n);
	memcpy(s1, ft_memchr(s1, '1', n), n);
	memcpy(s2, memchr(s2, '1', n), n);
	if (memcmp(s1, s2, 12))
		return (4);
	free(s1);
	free(s2);
	n = 11;
	s1 = (void *)malloc(sizeof(unsigned char) * n);
	s2 = (void *)malloc(sizeof(unsigned char) * n);
	memcpy(s1, "123456789", n);
	memcpy(s2, "123456789", n);
	s1 = ft_memchr(s1, '3', 2);
	s2 = memchr(s2, '3', 2);
	if (s1 != s2)
		return (5);
	free(s1);
	free(s2);
	n = 11;
	s1 = (void *)malloc(sizeof(unsigned char) * n);
	s2 = (void *)malloc(sizeof(unsigned char) * n);
	memcpy(s1, "123456789", n);
	memcpy(s2, "123456789", n);
	memcpy(s1, ft_memchr(s1, 0, n), n);
	memcpy(s2, memchr(s2, 0, n), n);
	if (memcmp(s1, s2, 12))
		return (6);
	free(s1);
	free(s2);
	return (0);
}

int	test_memcmp(void)
{
	size_t n;

	n = 5;
	if (ft_memcmp("12345", "12345", n) != memcmp("12345", "12345", n))
		return (1);
	n = 0;
	if (ft_memcmp("12345", "12345", n) != memcmp("12345", "12345", n))
		return (2);
	n = 5;
	if (ft_memcmp("12345", "12945", n) != memcmp("12345", "12945", n))
		return (3);
	n = 5;
	if (ft_memcmp("", "12345", n) != memcmp("", "12345", n))
		return (4);
	n = 0;
	if (ft_memcmp("82345", "12345", n) != memcmp("82345", "12345", n))
		return (5);
	n = 7;
	if (ft_memcmp("123456", "12345", n) != memcmp("123456", "12345", n))
		return (6);
	return (0);
}

int	test_strlen(void)
{
	if (ft_strlen("12345") != strlen("12345"))
		return (1);
	if (ft_strlen("") != strlen(""))
		return (2);
	if (ft_strlen("1") != strlen("1"))
		return (3);
	return (0);
}

int	test_isalpha(void)
{
	int i;

	i = 0;
	while (i <= 128)
	{
		if (ft_isalpha(i) != isalpha(i))
			return (1);
		i++;
	}
	return (0);
}

int	test_isdigit(void)
{
	int i;

	i = 0;
	while (i <= 128)
	{
		if (ft_isdigit(i) != isdigit(i))
			return (1);
		i++;
	}
	return (0);
}

int	test_isalnum(void)
{
	int i;

	i = 0;
	while (i <= 128)
	{
		if (ft_isalnum(i) != isalnum(i))
			return (1);
		i++;
	}
	return (0);
}

int	test_isascii(void)
{
	int i;

	i = 0;
	while (i <= 128)
	{
		if (ft_isascii(i) != isascii(i))
			return (1);
		i++;
	}
	return (0);
}

int	test_isprint(void)
{
	int i;

	i = 0;
	while (i <= 128)
	{
		if (ft_isprint(i) != isprint(i))
			return (1);
		i++;
	}
	return (0);
}

int	test_toupper(void)
{
	int i;

	i = 0;
	while (i <= 128)
	{
		if (ft_toupper(i) != toupper(i))
			return (1);
		i++;
	}
	return (0);
}

int	test_tolower(void)
{
	int i;

	i = 0;
	while (i <= 128)
	{
		if (ft_tolower(i) != tolower(i))
			return (1);
		i++;
	}
	return (0);
}

int	test_strchr(void)
{
	if (strcmp(ft_strchr("12345", '3'), strchr("12345", '3')))
		return (1);
	if (ft_strchr("", '3') != strchr("", '3'))
		return (2);
	if (strcmp(ft_strchr("12345", '1'), strchr("12345", '1')))
		return (3);
	if (strcmp(ft_strchr("12345", 0), strchr("12345", 0)))
		return (4);
	if (ft_strchr("12345", '6') != strchr("12345", '6'))
		return (5);
	if (strcmp(ft_strchr("123245", '2'), strchr("123245", '2')))
		return (6);
	if (strcmp(ft_strchr("", 0), strchr("", 0)))
		return (7);
	return (0);
}

int	test_strrchr(void)
{
	if (strcmp(ft_strrchr("12345", '3'), strrchr("12345", '3')))
		return (1);
	if (ft_strrchr("", '3') != strrchr("", '3'))
		return (2);
	if (strcmp(ft_strrchr("12345", '1'), strrchr("12345", '1')))
		return (3);
	if (strcmp(ft_strrchr("12345", 0), strrchr("12345", 0)))
		return (4);
	if (ft_strrchr("12345", '6') != strrchr("12345", '6'))
		return (5);
	if (strcmp(ft_strrchr("123245", '2'), strrchr("123245", '2')))
		return (6);
	if (strcmp(ft_strrchr("", 0), strrchr("", 0)))
		return (7);
	return (0);
}

int	test_strncmp(void)
{
	if (ft_strncmp("12345", "12345", 5) != strncmp("12345", "12345", 5))
		return (1);
	if (ft_strncmp("12345", "12345", 6) != strncmp("12345", "12345", 6))
		return (2);
	if (ft_strncmp("12345", "12345", 0) != strncmp("12345", "12345", 0))
		return (3);
	if (ft_strncmp("12a45", "12345", 5) != strncmp("12a45", "12345", 5))
		return (4);
	if (ft_strncmp("", "12345", 5) != strncmp("", "12345", 5))
		return (5);
	if (ft_strncmp("", "", 5) != strncmp("", "", 5))
		return (6);
	if (ft_strncmp("12345", "", 5) != strncmp("12345", "", 5))
		return (7);
	if (ft_strncmp("", "", 0) != strncmp("", "", 0))
		return (8);
	if (ft_strncmp("1234", "12345", 5) != strncmp("1234", "12345", 5))
		return (9);
	if (ft_strncmp("1234", "12345", 4) != strncmp("1234", "12345", 4))
		return (10);
	if (ft_strncmp("12245", "12345", 2) != strncmp("12234", "12345", 2))
		return (11);
	if (ft_strncmp("12245", "12345", 3) != strncmp("12234", "12345", 3))
		return (12);
	return (0);
}

int	test_atoi(void)
{
	if (ft_atoi("0") - atoi("0"))
		return (1);
	if (ft_atoi("-10") - atoi("-10"))
		return (2);
	if (ft_atoi("+10") - atoi("+10"))
		return (3);
	if (ft_atoi("+-10") - atoi("+-10"))
		return (4);
	if (ft_atoi("-+10") - atoi("-+10"))
		return (5);
	if (ft_atoi("   \n   -1489") - atoi("   \n   -1489"))
		return (6);
	if (ft_atoi("   \n   +2184489") - atoi("   \n   +2184489"))
		return (7);
	if (ft_atoi("2147483647") - atoi("2147483647"))
		return (8);
	if (ft_atoi("-2147483648") - atoi("-2147483648"))
		return (9);
	if (ft_atoi("-2147483649") - atoi("-2147483649"))
		return (10);
	if (ft_atoi("2147483648") - atoi("2147483648"))
		return (11);
	return (0);
}

int	test_strdup(void)
{
	char *s1;
	char *s2;

	s1 = ft_strdup("12345");
	s2 = strdup("12345");
	if (strncmp(s1, s2, strlen("12345" + 1)))
		return (1);
	free(s1);
	free(s2);
	s1 = ft_strdup("");
	s2 = strdup("");
	if (strncmp(s1, s2, 1))
		return (2);
	free(s1);
	free(s2);
	return (0);
}

int	main(void)
{
	if (!(test_memset()))
		printf("ft_memset: SUCCESS\n");
	else
		printf("ft_memset: FAILURE (%d)\n", test_memset());
	if (!(test_bzero()))
		printf("ft_bzero: SUCCESS\n");
	else
		printf("ft_bzero: FAILURE (%d)\n", test_bzero());
	if (!(test_memcpy()))
		printf("ft_memcpy: SUCCESS\n");
	else
		printf("ft_memcpy: FAILURE (%d)\n", test_memcpy());
	if (!(test_memccpy()))
		printf("ft_memccpy: SUCCESS\n");
	else
		printf("ft_memccpy: FAILURE (%d)\n", test_memccpy());
	if (!(test_memmove()))
		printf("ft_memmove: SUCCESS\n");
	else
		printf("ft_memmove: FAILURE (%d)\n", test_memmove());
	if (!(test_memchr()))
		printf("ft_memchr: SUCCESS\n");
	else
		printf("ft_memchr: FAILURE (%d)\n", test_memchr());
	if (!(test_memcmp()))
		printf("ft_memcmp: SUCCESS\n");
	else
		printf("ft_memcmp: FAILURE (%d)\n", test_memcmp());
	if (!(test_strlen()))
		printf("ft_strlen: SUCCESS\n");
	else
		printf("ft_strlen: FAILURE (%d)\n", test_strlen());
	if (!(test_isalpha()))
		printf("ft_isalpha: SUCCESS\n");
	else
		printf("ft_isalpha: FAILURE (%d)\n", test_isalpha());
	if (!(test_isdigit()))
		printf("ft_isdigit: SUCCESS\n");
	else
		printf("ft_isdigit: FAILURE (%d)\n", test_isdigit());
	if (!(test_isalnum()))
		printf("ft_isalnum: SUCCESS\n");
	else
		printf("ft_isalnum: FAILURE (%d)\n", test_isalnum());
	if (!(test_isascii()))
		printf("ft_isascii: SUCCESS\n");
	else
		printf("ft_isascii: FAILURE (%d)\n", test_isascii());
	if (!(test_isprint()))
		printf("ft_isprint: SUCCESS\n");
	else
		printf("ft_isprint: FAILURE (%d)\n", test_isprint());
	if (!(test_toupper()))
		printf("ft_toupper: SUCCESS\n");
	else
		printf("ft_toupper: FAILURE (%d)\n", test_toupper());
	if (!(test_tolower()))
		printf("ft_tolower: SUCCESS\n");
	else
		printf("ft_tolower: FAILURE (%d)\n", test_tolower());
	if (!(test_strchr()))
		printf("ft_strchr: SUCCESS\n");
	else
		printf("ft_strchr: FAILURE (%d)\n", test_strchr());
	if (!(test_strrchr()))
		printf("ft_strrchr: SUCCESS\n");
	else
		printf("ft_strrchr: FAILURE (%d)\n", test_strrchr());
	if (!(test_strncmp()))
		printf("ft_strncpy: SUCCESS\n");
	else
		printf("ft_strncmp: FAILURE (%d)\n", test_strncmp());
	if (!(test_atoi()))
		printf("ft_atoi: SUCCESS\n");
	else
		printf("ft_atoi: FAILURE (%d)\n", test_atoi());
	if (!(test_strdup()))
		printf("ft_strdup: SUCCESS\n");
	else
		printf("ft_strdup: FAILURE (%d)\n", test_strdup());
	return (0);
}
