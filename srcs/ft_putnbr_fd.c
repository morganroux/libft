#include "libft.h"

void	putnbr(unsigned int n, int fd)
{
	char	base[] = "0123456789";

	if (n == 0)			
		return ;
	putnbr(n / 10, fd);
	write(fd, &base[n % 10], 1);
}
void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	nbr = (unsigned int) (n < 0) ? -n : n;
	if (n < 0)
		write(fd, "-", 1);
	putnbr(nbr, fd);
	return ;
}
