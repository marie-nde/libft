#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *str;
	size_t i;

	str = (void*)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
