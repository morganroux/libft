#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	count_words(char const *s, char c)
{
	size_t	n;

	n = 0;
	while (*s != 0)
	{
		while (*s == c)
			s++;
		if (*s != 0)
		{
			n++;
			while (*s != c)
				s++;
		}
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	size_t	n_words;
	size_t	i;
	char	**ret;
	char	**strs;

	i = 0;
	n_words = count_words(s, c);

	if (!(strs = (char **) malloc((n_words + 1) * sizeof(char *))))
		return (NULL);
	ret = strs;
	while (n_words-- > 0)
	{
		i = 0;
		while(*s == c)
			s++;
		while(s[i] != c && s[i] != 0)
			i++;
		if(!(*strs = (char *) malloc((i + 1) * sizeof(char))))
			return (NULL);
		i = 0;
		while (*s != c && *s != 0)
			(*strs)[i++] = *s++;
		(*strs)[i] = 0;
		strs++;
	}
	*strs = 0;
	return (ret);
}

