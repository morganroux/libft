#include "t_libft.h"

int	t_ft_atoi()
{
	char	*s;

	s = strdup("0");
	if (ft_atoi(s) != atoi(s))
		return (1);
	s = strdup("-1");
	if (ft_atoi(s) != atoi(s))
		return (1);
	s = strdup("6");
	if (ft_atoi(s) != atoi(s))
		return (1);
	s = strdup("	+10");
	if (ft_atoi(s) != atoi(s))
		return (1);
	s = strdup("-102");
	if (ft_atoi(s) != atoi(s))
		return (1);
	s = strdup("   \n  0");
	if (ft_atoi(s) != atoi(s))
		return (1);
	s = strdup("0i6");
	if (ft_atoi(s) != atoi(s))
		return (1);
	s = strdup("+-6");
	if (ft_atoi(s) != atoi(s))
		return (1);
	s = strdup("2147483647");
	if (ft_atoi(s) != atoi(s))
		return (1);
	s = strdup("-2147483648");
	if (ft_atoi(s) != atoi(s))
		return (1);
	return (0);
}
