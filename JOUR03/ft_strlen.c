#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (str[i])
	{
		i++;
		j++;
	}
	return (j);
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