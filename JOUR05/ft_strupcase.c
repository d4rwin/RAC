// #include <string.h>
#include <stdio.h>

char *ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}


int main(void)
{
	char str1[] = "Phrase Test 12345!";
	printf("Original: %s ", str1);
	printf("Final: %s\n ", ft_strupcase(str1));

	return (0);
}