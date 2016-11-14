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

int		ft_iterative_power(int nb, int power)
{
	int	i;
	int	p;

	i = 0;
	p = nb;
	if (power < 0)
	{return (0);}
	while (++i < power)  /* i++ donne un mauvais resultat */
		p = p * nb;
	return (p);
}

int		main ()
{
	int i = 5;
	int p = 2;
	ft_putnbr(ft_iterative_power(i, p));
	ft_putchar('\n');
	return 0;
}
