#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (0);
		i++;
	}
	return (1);
}

int main()
{
	char str1[] = "PHRAsE TeSt 12345!";
	char str2[] = "1243987820394754673780";
	printf("doit afficher 0 : %d\n ", ft_str_is_numeric(str1));
	printf("doit afficher 1 : %d\n ", ft_str_is_numeric(str2));


	return (0);
}

