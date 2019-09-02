#include "libft.h"
#include <unistd.h>

void	ft_ptchar(char c)
{
	write(1, &c, 1);
}

void	ft_putendl(char const *s)
{
	int i;

	i = 0;
	while (s && s[i])
	{
		ft_ptchar(s[i]);
		i++;
	}
	if (s)
		ft_ptchar('\n');
}
