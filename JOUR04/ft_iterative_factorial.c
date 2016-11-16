#include <unistd.h>
// #include <stdio.h>
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


int			ft_iterative_factorial(int nb)
{
	int		facteur;

	facteur = nb;
	if (nb <= 0 || nb > 12)
		return 0;
	while (nb  > 1)
	{
		nb--;
		// nb = nb - 1;
		facteur = facteur * nb;
		
				// printf("%d\n", facteur);
				// printf("%d\n", nb);


	}
	return (facteur);
	// printf("%d\n", facteur);
	
}

int        main()
{
    int i;
    i = 5;
    i = ft_iterative_factorial(i);
    ft_putnbr (i);

    // printf("%d\n", i);
    ft_putchar('\n');

    return (0);
}
