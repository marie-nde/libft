/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:37:42 by mnaude            #+#    #+#             */
/*   Updated: 2019/10/25 15:07:40 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t n;
	size_t dest_len;
	size_t src_len;
	size_t size_len;

	i = 0;
	n = 0;
	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	size_len = dstsize;
	while (dst[n] != '\0' && dstsize)
	{
		n++;
		dstsize--;
	}
	if (dstsize == 0)
		return (src_len + size_len);
	while (src[i] != '\0' && dstsize > 1)
	{
		dst[n++] = src[i++];
		dstsize--;
	}
	dst[n] = '\0';
	return (src_len + dest_len);
}
