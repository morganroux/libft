#include "t_libft.h"

int	t_ft_strjoin()
{
	char	*s1, *s2, *s3;
	int	i;

	i = 0;
	while (i < 1000)
	{
		s3 = malloc(20);
		s1 = gen_str(gen_size_t(0,10));
		strlcpy(s3,s1, 20);
		s2 = gen_str(gen_size_t(0,10));
		strcat(s3, s2);
		if (ft_strcmp(ft_strjoin(s1, s2), s3) != 0)
		{
			printf("%s - %s\n", ft_strjoin(s1, s2), s3);
			return (1);
		}
		i++;
	}
	return (0);
}
