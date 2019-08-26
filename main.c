#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int		ft_strlen(const char *str);
char	*ft_strdup(const char *s);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, int n);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
char	*ft_strcpy(char *dest, const char *src);

int		main()
{
	const char str[] = "string";
	const char compare[] = "coucou";
	const char compare2[] = "coua";
	const char number[] = "-2147483648";
	int c = 65;
	int n = 2;
	const char src[] = "salut";
	char dest[] = "les amis";

	printf("Fonctions de la libc :\n");
	printf("ft_strlen : %d\n", ft_strlen(str));
	printf("ft_strdup : *%s* et sa taille : %d\n", ft_strdup(str), ft_strlen(ft_strdup(str)));
	printf("ft_strcmp : comparons *%s* et *%s* = %d\n", compare, compare2, ft_strcmp(compare, compare2));
	printf("strcmp (fonction officielle) : %d\n", strcmp(compare, compare2));
	printf("ft_strncmp : comparons les %d premiers caractères de *%s* et *%s* = %d\n", n, compare, compare2, ft_strncmp(compare, compare2, n));
	printf("strncmp (fonction officielle) : %d\n", strncmp(compare, compare2, n));
	printf("ft_atoi : pour %s renvoie l'int %d\n", number, ft_atoi(number));
	printf("atoi (fonction off) : pour %s renvoie l'int %d\n", number, atoi(number));
	printf("ft_isalpha : char %c = %d\n", c, ft_isalpha(c));
	printf("ft_isdigit : char %c = %d\n", c, ft_isdigit(c));
	printf("ft_isalnum : char %c = %d\n", c, ft_isalnum(c));
	printf("ft_strcpy : dest après fonction : *%s*\n", ft_strcpy(dest, src));
}
