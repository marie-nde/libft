#include "libft.h"
#include <unistd.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char *s3;
	const char *s4;
	size_t i;

	s3 = s1;
	s4 = s2;
	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	if (n == 0)
		return (0);
	while (i < n && s3[i] == s4[i])
		i++;
	return (s3[i] - s4[i]);
}
