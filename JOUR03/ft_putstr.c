#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

// void	ft_putstr(char *str)
// {
// 	int i;

// 	i = 0;

// 	while (str[i])
// 	{
// 		ft_putchar(str[i]);
// 		i += 2;
// 	}
// }

int main(int argc, const char *argv[])
{
	// char str[] = {'H' ,'e' ,'l' ,'l' ,'o' ,' ' ,'w' ,'o' ,'r' ,'l' ,'d', '\0'};
	char str[] = {"Hello world \0"};
	ft_putstr(str);
	ft_putchar('\n');
	return 0;
}