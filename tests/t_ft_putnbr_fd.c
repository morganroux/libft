#include "t_libft.h"

void	t_ft_putnbr_fd()
{
	int	i;

	i = 0;
	ft_putnbr_fd(i, 1);
	printf(" - %d\n", i);
	i = -10;
	ft_putnbr_fd(i, 1);
	printf(" - %d\n", i);
	i = 8;
	ft_putnbr_fd(i, 1);
	printf(" - %d\n", i);
	i = 0;
	ft_putnbr_fd(i, 1);
	printf(" - %d\n", i);

}
