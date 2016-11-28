#include <stdio.h>
int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*s1 || *s2) && (i < n))
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		i++;
	}
	return (0);
}


// int ft_strncmp(char *s1, char *s2, unsigned int n)
// {
// 	unsigned int i;

// 	i = 0;
// 	if (n == 0)
// 		return (0);
// 	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
// 		i++;
// 	return (s1[i] - s2[i]);
// }

int main(void)
{
	
  	char str1[] = "bbbabcdef";
	char str2[] = "aaa";

	printf("ft_strncmp: %d\n ", ft_strncmp(str1, str2, 3));
	return (0);
}