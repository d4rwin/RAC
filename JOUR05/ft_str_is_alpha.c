#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
	if (!(str[i] >= 'A' && str[i] <= 'z'))
		return (0);
		i++;
	}
	return (1);
}

// int ft_str_is_alpha(char *str)
// {
// 	while (str[0] != '\0')
// 	{
// 		if (!((str[0] >= 'A' && str[0] <= 'z') ))
// 			return (0);
// 		str++;
// 	}
// 	return (1);
// }

int main()
{
	char str1[] = "PHRAsE TeSt 12345!";
	char str2[] = "abcdABCDE";
	// printf("Original: %s ", str1);
	printf("doit afficher 0 : %d\n ", ft_str_is_alpha(str1));
	printf("doit afficher 1 : %d\n ", ft_str_is_alpha(str2));


	return (0);
}