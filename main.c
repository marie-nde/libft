#include <stdio.h>

int		ft_strlen(const char *str);
char	*ft_strdup(const char *s);

int		main()
{
	const char *str;

	str = "string";
	printf("ft_strlen : %d\n", ft_strlen(str));
	printf("ft_strdup : _%s_ et sa taille : %d\n", ft_strdup(str), ft_strlen(ft_strdup(str)));
}
