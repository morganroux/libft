#include "t_libft.h"

int	t_ft_str_cpycat(size_t (*t_f)(char *, const char *, size_t), size_t (*f)(char *, const char *, size_t))
{
	char	*dst_t, *dst;
	char	*src;
	size_t	len, n;
	int	i;

	i = 0;
	while (i < 1000)
	{
		len = gen_size_t(1, 10);
		dst = gen_str(len);
		dst_t = strdup(dst);
		src = gen_str(gen_size_t(1, 10));
		n = gen_size_t(0, len);
		if ((*t_f)(dst_t, src, n) != (*f)(dst, src, n))
			return (1);
		if(memcmp(dst, dst_t, len+1) != 0)
			return (2);
		free(src);
		free(dst);
		i++;
	}
	return (0);
}
