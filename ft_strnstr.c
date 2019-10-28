/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:41:39 by mnaude            #+#    #+#             */
/*   Updated: 2019/10/25 16:00:54 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static int	ft_isok(size_t i, size_t len, const char *haystack,
const char *needle)
{
	size_t j;

	j = 0;
	while (haystack[i] == needle[j] && needle[j] && i < len)
	{
		i++;
		j++;
	}
	if (!(needle[j]))
		return (1);
	return (0);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (needle && haystack)
	{
		if (needle[0] == '\0')
			return ((char*)haystack);
		while (haystack[i] && i < len)
		{
			if (ft_isok(i, len, haystack, needle) == 1)
				return ((char*)&haystack[i]);
			i++;
		}
	}
	return (NULL);
}
