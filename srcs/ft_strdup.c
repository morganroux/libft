/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 08:32:39 by mroux             #+#    #+#             */
/*   Updated: 2019/08/07 09:43:11 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		size;
	int		i;

	i = 0;
	size = 1;
	if (src == 0)
		return (0);
	while (src[size - 1] != '\0')
		size++;
	if ((dest = malloc(size)) == 0)
		return (0);
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
