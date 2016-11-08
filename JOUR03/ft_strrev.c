#include <unistd.h>

char	*ft_strrev(char *str)
{
	int		a;
	int		b;
	char	c;

	b = 0;
	while (str[b] != '\0')
		b++;
	a = -1;
	while (++a < --b)
	{
		c = str[a];
		str[a] = str[b];
		str[b] = c;
	}
	return (str);
}