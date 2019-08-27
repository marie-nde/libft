#include "libft.h"
#include <stdio.h>

int		main()
{
	printf("ft_strlen : Test : \"coucou\", strlen : %ld, ft_strlen : %ld\n", strlen("coucou"), ft_strlen("coucou"));
	printf("ft_strlen : Test : \"\", strlen : %ld, ft_strlen : %ld\n\n", strlen(""), ft_strlen(""));
	printf("ft_strdup : Test : str = \"coucou les amis\", strdup : \"%s\", ft_strdup : \"%s\"\n", strdup("coucou les amis"), ft_strdup("coucou les amis"));
	printf("ft_strdup : Test : \"\", strdup : \"%s\", ft_strdup : \"%s\"\n\n", strdup(""), ft_strdup(""));
	printf("ft_strcpy : Test : dest = \"coucou les amis\" et str = \"coucou\", strcpy : \"coucou\", ft_strcpy : \"%s\"\n", ft_strcpy("coucou les amis", "coucou"));
}
