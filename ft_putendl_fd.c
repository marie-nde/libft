#include "libft.h"
#include <unistd.h>

void	ft_ptchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putendl_fd(char const *s, int fd)
{
	int i;

	i = 0;
	while (s && s[i])
	{
		ft_ptchar_fd(s[i], fd);
		i++;
	}
	if (s)
		ft_ptchar_fd('\n', fd);
}
