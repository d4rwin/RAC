#include <stdio.h>
#include <string.h>


char *ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		{
			i++;
			j = 0;
		}

	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int main ()
{
	char str[20] = "leonard timsit";
	char str2[20] = "1234567";
	
	printf("%s\n", ft_strncat(str, str2, 3));
	printf("============================\n");
	// printf("%s\n", strncat(str, str2, 3));
	return (0);

}