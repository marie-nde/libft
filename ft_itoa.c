#include "libft.h"
#include <stdlib.h>

int		ft_count(int nb)
{
	int compt;

	compt = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		compt++;
	}
	return (compt);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		end;

	if (n >= 0)
		if (!(str = (char*)malloc(sizeof(char) * ft_count(n) + 1)))
			return (NULL);
	if (n < 0)
	{
		if (!(str = (char*)malloc(sizeof(char) * ft_count(n * -1) + 2)))
			return (NULL);
		str[0] = '-';
		n *= -1;
	}
	end = ft_count(n);
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	str[end + 1] = '\0';
	while (n > 9)
	{
		str[end] = (n % 10) + '0';
		n = n / 10;
		end--;
	}
	return (str);
}
