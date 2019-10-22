#include "libft.h"

void ft_strdel(char **as) 
{
	if (*as == NULL)
		return;
	free(*as);
	*as = 0;
	return;
}
	
