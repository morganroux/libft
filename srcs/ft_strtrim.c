#include "libft.h"


char *ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	char	*s;
	size_t	len;

	len = ft_strlen(s1);
	if (!(ret = (char *) malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (ft_strstr(set, s1))
		s1++;
	s = ret;
	while (*s1 != 0)
		*s++ = *s1++;
 	*s = 0;
	while (ft_strstr(set,--s))
		*s = 0;
	return (ret);
}
