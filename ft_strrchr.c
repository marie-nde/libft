/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:41:48 by mnaude            #+#    #+#             */
/*   Updated: 2019/10/25 15:46:35 by mnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char *str;

	str = NULL;
	if (!s)
		return ((char*)s);
	while (*s)
	{
		if (*s == (char)c)
			str = (char*)s;
		s++;
	}
	if (*s == (char)c)
		return ((char*)s);
	return (str);
}
