#include <stdio.h>
// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write (1, &c, 1);
// }

// void	ft_putnbr(int nb)
// {
// 	if (nb < 0)
// 	{
// 		nb = - nb;
// 	}
// 	if (nb >= 10)
// 	{
// 		ft_putnbr(nb / 10);
// 		ft_putnbr(nb % 10);
// 	}
// 	if (nb < 10)
// 	{
// 		ft_putchar(nb + '0');
// 	}
// }
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = (a / b);
		*mod = (a % b);
	}
}
int main()
{
	int a;
	int b;
	int div;
	int mod;
	int *pdiv;
	int *pmod;

	a = 10;
	b = 3;
	div = 0;
	mod = 0;
	pdiv = &div;
	pmod = &mod;

	ft_div_mod(a, b, pdiv, pmod);
	printf("%d\n", div);
	printf("%d\n", mod);

	// ft_putnbr(div);
	// ft_putchar('\0');
	// ft_putnbr(mod);
	
	return 0;
}