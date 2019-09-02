#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char *mem;

	if (s == NULL)
		return (NULL);
	mem = s;
	while (n != 0)
	{
		*mem = c;
		mem++;
		n--;
	}
	return (s);
}
