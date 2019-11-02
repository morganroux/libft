#include "t_libft.h"

int	t_ft_split()
{
	char	**strs;
	char	*cmp[] = {"ceci", "est", "un", "essai"};	
	int	i;

	i = 0;
	strs = ft_split("     ceci est   un essai    ",' ');
	while(strs[i] != 0)
	{
		if(ft_strcmp(strs[i], cmp[i]) != 0)
			return (i);
		i++;
	}
	free(strs);

	i = 0;
	strs = ft_split("     ceci est   un essai    ",0);
	if(ft_strcmp(*strs, "     ceci est   un essai    ") != 0)
		return (10);
	free(strs);

	i = 0;
	strs = ft_split("    ",' ');
	if(*strs != 0)
		return (20);
	free(strs);

	i = 0;
	strs = ft_split("",' ');
	if(*strs != 0)
		return (30);
	free(strs);

	i = 0;
	strs = ft_split("ceci",' ');
	if(ft_strcmp(*strs, "ceci"))
		return (40);
	free(strs);


	return (0);
}
