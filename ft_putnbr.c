/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:39:05 by mnaude            #+#    #+#             */
/*   Updated: 2019/10/07 10:39:06 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	long nb;

	nb = n;
	if (nb < 0)
	{
		ft_write('-');
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_write((nb % 10) + '0');
}
