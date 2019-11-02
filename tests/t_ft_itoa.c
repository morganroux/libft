#include "t_libft.h"

int	t_ft_itoa()
{
	if (ft_strcmp("0", ft_itoa(0)) != 0)
	{
		return (1);
	}
	
	if (ft_strcmp("-2", ft_itoa(-2)) != 0)
	{
		printf("%s\n", ft_itoa(-2));
		return (2);
	}
	
	if (ft_strcmp("9", ft_itoa(9)) != 0)
	{
		return (3);
	}

	if (ft_strcmp("42", ft_itoa(42)) != 0)
	{
		return (4);
	}

	if (ft_strcmp("1000", ft_itoa(1000)) != 0)
	{
		return (5);
	}
	
	if (ft_strcmp("108", ft_itoa(108)) != 0)
	{
		return (6);
	}

	if (ft_strcmp("2147483647", ft_itoa(2147483647)) != 0)
	{
		return (7);
	}

	if (ft_strcmp("-2147483648", ft_itoa(-2147483648)) != 0)
	{
		return (8);
	}

	return (0);
}
