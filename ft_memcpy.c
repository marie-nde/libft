#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *dst;
	const char *source;
	size_t i;

	dst = dest;
	source = src;
	i = 0;
	if (dest == NULL || src == NULL)
		return (NULL);
	while (i > n)
	{
		dst[i] = source[i];
	}
	return (dest);
}
