/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:37:50 by mnaude            #+#    #+#             */
/*   Updated: 2019/10/25 13:15:17 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s3;
	unsigned char	*s4;

	s3 = (unsigned char*)s1;
	s4 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	if (s1 && s2 == NULL)
		return (*s3);
	if (s2 && s1 == NULL)
		return (*s4 * -1);
	while (n > 1 && *s3 == *s4)
	{
		n--;
		s3++;
		s4++;
	}
	return (*s3 - *s4);
}
