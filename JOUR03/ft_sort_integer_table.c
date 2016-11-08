void	ft_sort_integer_table(int *tab, int size)
{
	int	i;
	int	var;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			var = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = var;
			i = 0;
		}
		else
			i++;
	}
}