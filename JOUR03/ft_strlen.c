#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		ft_strlen(char *str)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (str[i])
	{
		a++;
		b++;
	}
	return (b);
}

int main()
{
	char str[] = {'1', '2', '3', '4', '5', '\0'};
	int i;

	i = 0;
	// ft_putstr(str);
	i = ft_strlen(str);
	ft_putchar(i +'0');
	ft_putchar('\n');
	return 0;
}