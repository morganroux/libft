/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 20:44:51 by mroux             #+#    #+#             */
/*   Updated: 2019/08/04 13:33:20 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check(char *str, char *to_find, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (str[i] == to_find[i])
	{
		if (i == size - 1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	unsigned int j;
	unsigned int size;

	i = 0;
	j = 0;
	size = 0;
	while (to_find[size] != '\0')
		size++;
	if (size == 0)
		return (str);
	while (str[i] != 0)
	{
		if (str[i] == to_find[0])
		{
			if (check(&str[i], to_find, size))
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
