#include <stdio.h>	

int		ft_atoi(char *str)
{
	int i;
	int nbr;
	int negative;

	nbr = 0;
	negative = 0;
	i = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v'))
		i++;
	while ((str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		negative = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr *= 10;
		nbr += (int)str[i] - '0';
		i++;
	}
	if (negative == 1)
		return (-nbr);
	else
		return (nbr);
}

int		main(void)
{
	int 	i;
	char	str[4] = "24e";

	i = ft_atoi(str);
	printf("%i\n", i);
	return 0;
}