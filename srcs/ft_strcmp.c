/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 16:25:45 by mroux             #+#    #+#             */
/*   Updated: 2019/08/03 16:42:14 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char const *s1, char const *s2)
{
	unsigned int	i;

	i= 0;
	if (s1 == 0 || s2 == 0)
	{
		if (s1 == 0 && s2 == 0)
			return (0);
		if (s1 != 0)
			return (1);
		else
			return (-1);
	}
	while ((s1[i] != 0 || s2[i] != 0))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
