/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:41:55 by mnaude            #+#    #+#             */
/*   Updated: 2019/10/07 11:19:16 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_is_charset(char c, char i)
{
	if (c == i)
		return (1);
	return (0);
}

int		ft_count_letters(char const *str, char c)
{
	int i;
	int compt;

	i = 0;
	compt = 0;
	while (ft_is_charset(c, str[i]) == 1)
		i++;
	while (ft_is_charset(c, str[i]) == 0 && str[i])
	{
		compt++;
		i++;
	}
	return (compt);
}

int		ft_count_words(char const *str, char c)
{
	int compt;
	int i;

	i = 0;
	compt = 0;
	if (ft_is_charset(c, str[i]) == 0)
	{
		compt++;
		i++;
	}
	while (str[i])
	{
		if (ft_is_charset(c, str[i - 1]) == 1 && ft_is_charset(c, str[i]) == 0)
			compt++;
		i++;
	}
	return (compt);
}

void	ft_strsplit(char const *s, char c, char **retour)
{
	char	*tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (k < ft_count_words(s, c))
	{
		j = 0;
		if (!(tab = (char*)malloc(sizeof(char) *
						ft_count_letters(s + i, c) + 1)))
			return ;
		while (ft_is_charset(c, s[i]) == 1)
			i++;
		while (ft_is_charset(c, s[i]) == 0)
			tab[j++] = s[i++];
		tab[j] = '\0';
		retour[k] = tab;
		k++;
	}
	retour[k] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char **retour;

	if (!(retour = (char**)malloc(sizeof(char*) * ft_count_words(s, c) + 1)))
		return (NULL);
	ft_split(s, c, retour);
	return (retour);
}
