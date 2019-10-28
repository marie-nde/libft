/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:41:55 by mnaude            #+#    #+#             */
/*   Updated: 2019/10/18 14:04:21 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int		ft_count_letters(char const *str, char c)
{
	int i;
	int compt;

	i = 0;
	compt = 0;
	while (str[i] && str[i] != c)
	{
		compt++;
		i++;
	}
	return (compt);
}

int		ft_count_words(char const *str, char c)
{
	int i;
	int compt;

	i = 0;
	compt = 0;
	if (str[i] && str[i] != c)
	{
		i++;
		compt++;
	}
	while (str[i])
	{
		if (str[i - 1] == c && str[i] != c)
			compt++;
		i++;
	}
	return (compt);
}

char	**ft_free(char **retour, int i)
{
	while (i >= 0)
	{
		free(retour[i]);
		i--;
	}
	return (NULL);
}

char	**ft_while(char const *s, char c, char **retour)
{
	int	i;
	int	j;
	int	k;
	int counter;

	i = 0;
	k = 0;
	counter = ft_count_words(s, c);
	while (k < counter)
	{
		j = 0;
		while (s[i] == c)
			i++;
		if (!(retour[k] = (char*)malloc(sizeof(char) *
						ft_count_letters(s + i, c) + 1)))
			return (ft_free(retour, k--));
		while (s[i] && s[i] != c)
			retour[k][j++] = s[i++];
		retour[k][j] = '\0';
		while (s[i] == c)
			i++;
		k++;
	}
	retour[k] = NULL;
	return (retour);
}

char	**ft_split(char const *s, char c)
{
	char	**retour;
	int		i;

	retour = NULL;
	i = 0;
	if (s == NULL)
	{
		if (!(retour = (char**)malloc(sizeof(char*) * 1)))
			return (NULL);
		retour[0] = NULL;
		return (retour);
	}
	if (!(retour = (char**)malloc(sizeof(char*) * ft_count_words(s, c) + 1)))
		return (NULL);
	retour = ft_while(s, c, retour);
	return (retour);
}
