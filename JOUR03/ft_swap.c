#include <unistd.h>
#include <stdio.h>
// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }
int	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
	return (0);
}
int main ()
{
	int a = 66532;
	int b = 732;
	int *aa = &a;
	int *bb = &b;

	printf("%d\t%d\n", a, b);
	ft_swap(aa, bb);
	printf("%d\t%d\n", a, b);
	return 0;
}