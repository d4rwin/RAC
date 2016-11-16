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


// int ft_find_next_prime(int nb)

// {
// 	int i;

// 	i = 2;
// 	if (nb == 1 || nb == 0)
// 		return (0);
// 	while (i < nb)
// 	{
// 		if ((nb % i) == 0)
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }


// ------------

// int		calc(int nb, int num)
// {
// 	if (!(nb % num) && num == nb)
// 		return (1);
// 	if ((num < nb) && (nb % num))
// 	{
// 		return (calc(nb, num + 1));
// 	}
// 	return (0);
// }

// int		ft_find_next_prime(int nb)
// {
// 	if (nb < 3)
// 		return (2);
// 	if (!(calc(nb, 2)))
// 		return (ft_find_next_prime(nb + 1));
// 	return (nb);
// }
// ------------
int		ft_find_next_prime(int nb)
{
	int i;

	i = 2;

	if (nb <= 1)
		// ft_putnbr(2);
		// ft_putchar('\n');
		return (2);
	while (i < nb)
	{
		if ((nb % i) == 0)
		{
			nb++;
			i = 2;
		}
		else
			i++;
	}
	return (nb);
}


// 	int	 put;
// 	put = ft_find_next_prime(nb);

// 	ft_putnbr(put);
// 	ft_putchar('\n');
// }

int main()
{
	int i = 0;
	// i = 14;
	

	ft_putnbr(i);
	ft_putchar('\n');
	i = ft_find_next_prime(i);
	ft_putnbr(i);
	ft_putchar('\n');	
	return (0);
}
// 	while (i != 150)
// 		test(i++);
// 	return 0;
// }