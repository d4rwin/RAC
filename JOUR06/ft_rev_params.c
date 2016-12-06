#include "libft.h"

int		main(int argc, char **argv)
{
	int i;

	i = argc - 1;
	while (i > 0)
	{
		ft_putstr(argv[i]);
		// printf("argument %d : %s\n",i , argv[i]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}