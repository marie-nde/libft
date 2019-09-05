#include "libft.h"
#include <stdlib.h>

/*not working*/

int		ft_count(int n)
{
	int compt;

	compt = 0;
	while (n > 9)
	{
		n = n / 10;
		compt++;
	}
	return (compt);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nb;

	nb = n;
	if (nb >= 0)
	{
		if (!(str = (char*)malloc(sizeof(char) * ft_count(nb) + 1)))
			return (NULL);
	}
	if (nb < 0)
	{
		if (!(str = (char*)malloc(sizeof(char) * ft_count(nb * -1) + 2)))
			return (NULL);
		nb = nb * -1;
		str[0] = '-';
	}
	i = ft_count(nb) + 1;
	str[i + 1] = '\0';
	while (nb > 9)
	{
		str[i] = (nb % 10) + '0';
		nb = nb / 10;
		i--;
	}
	str[i] = (nb % 10) + '0';
	return (str);
}
