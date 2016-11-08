#include <unistd.h>

int		ft_putchar(char e);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*str[i] != '\0')
	{
		ft_putchar(*str[i]);
		i++;
	}
}