#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	size_t	len;
	len = strlen(s);
	write(fd, s, len); 
	write(fd, "\n", 1);
}
