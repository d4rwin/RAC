#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr_base(int nb, char *base)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}

	else
	{
		ft_putchar(base[nb]);
	}
}

int main ()
{
	ft_putnbr_base(5, 2);
	// printf("%s\n", 	ft_putnbr_base(5, "0"));
	return (0);
}