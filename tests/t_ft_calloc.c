#include "t_libft.h"

int	t_ft_calloc()
{
	void	*mem;
	void	*ref;

	mem = ft_calloc(3, 2);
	ref = calloc(3, 2);
	if (memcmp(mem, ref, 6) != 0)
	{
		hexdump(mem, 20);
		hexdump(ref, 20);
		return (3);
	}

	free(mem);
	free(ref);
	return (0);

}
