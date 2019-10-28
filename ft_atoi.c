/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:36:10 by mnaude            #+#    #+#             */
/*   Updated: 2019/10/25 11:18:43 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int		ft_compteur(long nb)
{
	int i;

	i = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	if (i > 11)
		return (1);
	return (0);
}

int				ft_atoi(const char *str)
{
	long	nb;
	int		i;
	int		neg;

	nb = 0;
	i = 0;
	neg = 1;
	if (!str)
		return (0);
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + (str[i++] - '0');
	if ((unsigned)nb > 2147483647 && neg == 1)
		return (-1);
	else if (nb * neg < -2147483648 || ft_compteur(nb * neg) == 1)
		return (0);
	return (nb * neg);
}
