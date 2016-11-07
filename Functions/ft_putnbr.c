#include <unistd.h>

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_putchar(48);
	}
	if (nb < 0 && nb > -2147483648)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10 && nb < 2147483647)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb > 0 && nb < 10)
	{
		ft_putchar('0' + nb);
	}
}