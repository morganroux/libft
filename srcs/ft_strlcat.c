/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 21:21:56 by mroux             #+#    #+#             */
/*   Updated: 2019/08/04 16:31:07 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *s1, char *s2, unsigned int size)
{
	char			*dest;
	char			*src;
	unsigned int	dlen;
	unsigned int	slen;

	dest = s1;
	src = s2;
	dlen = 0;
	slen = 0;
	while (src[slen])
		slen++;
	while (*dest)
	{
		dest++;
		if (dest - s1 >= size)
			return (size + slen);
	}
	dlen = dest - s1;
	while (*src && dest - s1 < size - 1)
		*dest++ = *src++;
	return (slen + dlen);
}
