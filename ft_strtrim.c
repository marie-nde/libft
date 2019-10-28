/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:42:17 by mnaude            #+#    #+#             */
/*   Updated: 2019/10/19 15:55:39 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

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

int		ft_count_space(char const *s, char const *set)
{
	int compt;
	int i;

	i = 0;
	compt = 0;
	while (ft_space(s[i], set) == 1)
	{
		compt++;
		i++;
	}
	while (s[i])
		i++;
	i--;
	while (ft_space(s[i], set) == 1)
	{
		compt++;
		i--;
	}
	return (compt);
}

int		ft_from_end(char const *s1, char const *set)
{
	int i;
	int compt;

	i = 0;
	compt = 0;
	while (s1[i])
		i++;
	i--;
	while (ft_space(s1[i], set) == 1)
	{
		compt++;
		i--;
	}
	return (compt);
}

int		ft_check(char const *s1, char const *set)
{
	int i;

	i = 0;
	while (ft_space(s1[i], set) == 1)
		i++;
	if (s1[i] == '\0')
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	int		j;
	int		compt;
	char	*cpy;
	int		back;

	i = 0;
	j = 0;
	compt = ft_count_space(s1, set);
	back = ft_from_end(s1, set);
	if (s1[i] == '\0' || ft_check(s1, set) == 1)
	{
		if (!(cpy = (char*)malloc(sizeof(char) * 1)))
			return (NULL);
		cpy[i] = '\0';
		return (cpy);
	}
	if (!(cpy = (char*)malloc(sizeof(char) * ft_strlen(s1) - compt + 1)))
		return (NULL);
	while (ft_space(s1[i], set) == 1)
		i++;
	while (i < (ft_strlen(s1) - back))
		cpy[j++] = s1[i++];
	cpy[j] = '\0';
	return (cpy);
}
