#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int ft_strcmp(char *s1, char *s2);

int main(void)
{
		char str1[]	= "abc";
		char str2[]	= "b";

	//printf("Strcmo: %d ", strcmp(str1, str2));
	printf("ft_strcmp: %d ", ft_strcmp(str1, str2));
	printf("src: %s ", str1);
	printf("Search: %s\n ",  str2);
	return (0);
}