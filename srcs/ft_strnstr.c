#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int i;
	unsigned int j;
	unsigned int size;

	i = 0;
	j = 0;
	size = 0;
	while (needle[size] != '\0')
		size++;
	if (size == 0)
		return ((char *)haystack);
	while (haystack[i] != 0 && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (haystack[i + j] == needle[j] && (i + j) < len)
			{
				if (j == size - 1)
					return ((char *)&haystack[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
