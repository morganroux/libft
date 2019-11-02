#include "t_libft.h"

int	t_is_function(int (*t_f)(int), int (*f)(int))
{
	int	c;
/*
	c = 'e';
	printf("%d - %d\n", t_f(c), f(c));
	if (t_f(c) != f(c))
		return (1);
	c = 'T';
	printf("%d - %d\n", t_f(c), f(c));
	if (t_f(c) != f(c))
		return (1);
	c = 0;
	printf("%d - %d\n", t_f(c), f(c));
	if (t_f(c) != f(c))
		return (1);
	c = '7';
	printf("%d - %d\n", t_f(c), f(c));
	if (t_f(c) != f(c))
		return (1);
	c = 5;
	printf("%d - %d\n", t_f(c), f(c));
	if (t_f(c) != f(c))
		return (1);
	c = 200;
	printf("%d - %d\n", t_f(c), f(c));
	if (t_f(c) != f(c))
		return (1);
	getchar();	*/
	int	i = 0;
	while (i++ < 1000)
	{
		c = gen_uchar(0, 255);
		if (t_f(c) != f(c))
		{
			printf("%d - %d\n", t_f(c), f(c));
			return (1);
		}
	}
	return (0);

}
