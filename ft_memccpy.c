#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *dst;
	const char *source;
	size_t i;

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
