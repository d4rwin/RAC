#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strrev(char *str)
{
	int		a;
	int		b;
	char	c;

	b = 0;
	while (str[b] != '\0')
		b++;
	a = -1;
	while (a++ < b--)
	{
		c = str[a];
		str[a] = str[b];
		str[b] = c;
	}
	return (str);
}


int main ()

{
	char str[10] = "HELLO";

	ft_strrev(str);

	ft_putchar(str);

	return 0;
}
