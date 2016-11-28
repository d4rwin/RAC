#include <stdio.h>

char *ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}


int main(void)
{
	char str1[] = "PHRAsE TeSt 12345!";
	printf("Original: %s ", str1);
	printf("Final: %s\n ", ft_strlowcase(str1));

	return (0);
}