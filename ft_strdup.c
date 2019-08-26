#include <stdlib.h>

int		ft_length(const char *str)
{
	int i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char *dup;
	int i;

	i = 0;
	if (s == NULL)
	{
		dup = NULL;
		return (NULL);
	}
	if (!(dup = (char*)malloc(sizeof(char) * ft_length(s))))
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
