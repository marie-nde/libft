/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:41:39 by mnaude            #+#    #+#             */
/*   Updated: 2019/10/07 10:41:40 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char*)haystack);
	while (haystack[i] && i < n)
	{
		j = 0;
		while (needle[j] == haystack[i] && i < n)
		{
			if (needle[j + 1] == '\0' || i == n - 1)
				return ((char*)haystack + (i - j));
			i++;
			j++;
		}
		i++;
	}
	return (NULL);
}
