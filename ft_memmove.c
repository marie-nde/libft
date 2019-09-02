#include "libft.h"
#include <stdlib.h>

char	*ft_ncpy(char *dest, const char *src, int n)
{
	int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *dup;

	if (dest == NULL || src == NULL)
		return (NULL);
	if (!(dup = (char*)malloc(sizeof(char) * n)))
		return (NULL);
	dup = ft_ncpy(dup, src, n);
	dest = (void*)ft_ncpy(dest, dup, n);
	free(dup);
	return (dest);
}
