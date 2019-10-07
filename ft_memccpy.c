/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:37:35 by mnaude            #+#    #+#             */
/*   Updated: 2019/10/07 10:49:58 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*dst;
	const char	*source;
	size_t		i;

	dst = dest;
	source = src;
	i = 0;
	while (i < n)
	{
		if (dst[i] == c)
			return (dst);
		dst[i] = source[i];
		i++;
	}
	return (dest);
}
