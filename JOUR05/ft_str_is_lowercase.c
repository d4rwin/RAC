#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
	if (!(str[i] >= 'a' && str[i] <= 'z')) /* || ( str[i] != ' ')))*/
		return (0);
		i++;
	}
	return (1);
}

int main()
{
	char str1[] = "PHRAsE TeSt 12345!";
	char str2[] = "hellowhatsup";
	printf("doit afficher 0 : %d\n ", ft_str_is_lowercase(str1));
	printf("doit afficher 1 : %d\n ", ft_str_is_lowercase(str2));
	printf("----------------------------\n");
	// printf("doit afficher 0 : %d\n ", str_is_lowercase(str1));
	// printf("doit afficher 1 : %d\n ", str_is_lowercase(str2));


	return (0);
}
