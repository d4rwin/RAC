#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i-1] == ' '
			&& (str[i] >= 'A'
			&& str[i] <= 'z'))
			|| i == 0) /*||(str[i-1] != */
			str[i] -= 32;
		i++;
	}
	return (str);
}





int main(void)
{
	char str1[] = "phrase de test il faut des majuscules au debut de chaque mot 12345!";
	printf("Original: %s ", str1);
	printf("Final: %s\n ", ft_strcapitalize(str1));

	return (0);
}