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
		ft_putchar(nb + '0');
}

int			ft_recursive_power(int nb, int power)
{
	if (power >= 2)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (nb);
}

int		main ()
{
	int i = 5;
	int p = 3;
	ft_putnbr(ft_recursive_power(i, p));
	ft_putchar('\n');
	return 0;
}
