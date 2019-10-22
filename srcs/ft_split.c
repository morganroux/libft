#include "libft.h"

size_t	count_words(char const *s, char c)
{
	size_t	n;

	n = 0;
	while (*s != 0)
	{
		while (*s == c)
			s++;
		if (*s != 0)
			n++;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	size_t	n_words;
	size_t	i;
	char	**ret;

	i = 0;
	n_words = count_words(s, c);
	if (!(ret = (char **) malloc((n_words + 1) * sizeof(char *))))
		return (NULL);
	ret[n_words] = 0;
	while (n_words-- > 0)
	{
		i = 0;
		while(*s == c)
			s++;
		while(s[i] != c || s[i] != 0)
			i++;
		if(!(*ret = (char *) malloc((i + 1) * sizeof(char))))
			return (NULL);
		i = 0;
		while (s[i] != c || s[i] != 0)
			(*ret)[i++] = *s++;
		(*ret)[i] = 0;
	}
	return (ret);
}

