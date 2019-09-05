#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (!(ptr = (void*)malloc(sizeof(void) * size + 1)))
		return (NULL);
	while (i <= size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
