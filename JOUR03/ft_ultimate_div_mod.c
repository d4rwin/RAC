// void	ft_ultimate_div_mod(int *a, int *b)
// {
// 	int	c;

// 	if (b != 0)
// 	{
// 		c = *a;
// 		*a = *a / *b;
// 		*b = c % *b;
// 	}
// }


#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = - nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmp;

	tmp = *a / *b;
	*b = *a % *b;
	*a = tmp;
}

int main()
{
	int a;
	int b;
	int *aa;
	int *bb;

	a = 10;
	b = 3;
	aa = &a;
	bb = &b;

	ft_ultimate_div_mod(aa, bb);
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putnbr(b);
	ft_putchar('\n');
	return 0;
}