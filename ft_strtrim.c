/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:42:17 by mnaude            #+#    #+#             */
/*   Updated: 2019/10/07 11:18:47 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_count_space(char const *s, char const *set)
{
	int compt;
	int i;
	int j;

	i = 0;
	j = 0;
	compt = 0;
	while (ft_space(s[i], set) == 1)
	{
		compt++;
		i++;
	}
	while (s[i])
		i++;
	i--;
	while (ft_space(s[i],set) == 1)
	{
		compt++;
		i--;
	}
	return (compt);
}

int		ft_length_str(char const *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_space(char c, const char *set)
{
	int j;

	j = 0;
	while (set[j])
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int			i;
	int			j;
	int			compt;
	char		*cpy;

	i = 0;
	j = 0;
	compt = ft_count_space(s1, set);
	if (!(cpy = (char*)malloc(sizeof(char) * ft_length_str(s) - compt + 1)))
		return (NULL);
	while (ft_space(s1[i], set) == 1)
		i++;
	while (ft_space(s1[i], set) == 0 && s[i])
	{
		cpy[j] = s1[i];
		j++;
		i++;
	}
	cpy[j] = '\0';
	return (cpy);
}
