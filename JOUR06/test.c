// #include <unistd.h>
// #include <string.h>
#include "libft.h"
#include <stdio.h>


char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;

	while (src[i] && i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}

int main()
{
	char dest[20] = {'u', 'n', ' ', 't', 'e', 's', 't', 'e'};
	char src[] = {'v', 'o', 'i', 'l', 'a', ' ','f', 'i', 'n', '\0'};
	int n = 20;
	int m = 15;

	ft_strncpy(dest, src, 3);
	ft_putstr(ft_strncpy(dest, src, n));
	ft_putchar('\n');
	ft_putstr(strncpy(dest, src, n));
	ft_putchar(ft_strlen(src));
	// ft_putchar(ft_swap(n, m));



	return 0;
}