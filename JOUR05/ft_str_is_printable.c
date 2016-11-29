#include <stdio.h>

int ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
	if (!(str[i] >= 32 && str[i] <= 126)) 
		return (0);
		i++;
	}
	return (1);
}

int main()
{
	char str1[] = "PHRAsE TeSt 12345!";
	char str2[] = "HELLOWHATSUP";
	char str3[] = "\n\v\t";
	printf("doit afficher 1 : %d\n ", ft_str_is_printable(str1));
	printf("doit afficher 1 : %d\n ", ft_str_is_printable(str2));
	printf("doit afficher 0 : %d\n ", ft_str_is_printable(str3));

	printf("----------------------------\n");
	// printf("doit afficher 0 : %d\n ", str_is_lowercase(str1));
	// printf("doit afficher 1 : %d\n ", str_is_lowercase(str2));


	return (0);
}


	