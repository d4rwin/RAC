#include <unistd.h>
#include <stdio.h>
// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// char	*ft_strrev(char *str)
// {
// 	int		a;
// 	int		b;
// 	char	c;

// 	b = 0;
// 	while (str[b] != '\0')
// 		b++;
// 	a = -1;
// 	while (a++ < b--)
// 	{
// 		c = str[a];
// 		str[a] = str[b];
// 		str[b] = c;
// 	}
// 	return (str);
// }


char    *ft_strrev(char *str)
{
        int i;
        int j;
        char tmp;
 
        i = 0;
        j = 0;
        while (str[i] != '\0')
                i++;
        i = i - 1;
        // while (j < i/2)
        while (i > j)	
        {
                tmp = str[i];
                str[i] = str[j];
                str[j] = tmp;
                i--;
                j++;
        }
        return (str);
}

int     main()
{
        char    str1[] = "Hello World !";
 
        printf("%s\n", ft_strrev(str1));
        return (0);
}
