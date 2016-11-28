#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int pos;
	int len;

	i = 0;
	pos = 0;
	len = 0;
	while (to_find[len] != '\0')
		len++;
	if (len == 0)
		return (str);
	while (str[i])
	{
		while (to_find[pos] == str[i + pos])
		{
			if (pos == len - 1)
				return (str + i);
			pos++;
		}
		pos = 0;
		i++;
	}
	return (0);
}

int main()
{
	char str_src[]	= "Helloa";
	char str_find[]	= "lo";

	printf("Text: %s ", ft_strstr(str_src, str_find));
	printf("src: %s ", str_src);
	printf("Search: %s ",  str_find);
	return (0);
}