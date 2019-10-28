/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:58:07 by mnaude            #+#    #+#             */
/*   Updated: 2019/10/25 11:23:55 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static void		ft_fill(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char*)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

void			*ft_calloc(size_t count, size_t size)
{
	char *tab;

	if (!(tab = malloc(size * count)))
		return (NULL);
	ft_fill(tab, (size * count));
	return (tab);
}
