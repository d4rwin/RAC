#include <unistd.h>

void	ft_strlen(char *str)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (*str[i] != '\0')
	{
		ft_putchar(*str[i]);
		i++;
		count++;
	}
	return (count);
}