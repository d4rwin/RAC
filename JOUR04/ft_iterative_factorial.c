#include <unistd.h>

void	ft_putchar(char c)
{
	write (1 , &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb--;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10)
		ft_putchar(nb + 49);
}

int		ft_interative_factorial(int nb)
{
	int out;

	out = nb;
	
	if (nb == 0)
		return (1);
	while (nb)
	{
		out = out * (nb - 1);
		nb--;
	}
	return (out);
}

int	main ()
{
	int i = 71  ;
	ft_putnbr(i);
	ft_putchar(' ');
	ft_putnbr(ft_interative_factorial(i));
	ft_putchar('\n');
	return 0;
}

// int main()
// {
// 	int i;

// 	i = 0;
// 	while (i != 10)
// 		test(i++);
// 	return 0;
// }