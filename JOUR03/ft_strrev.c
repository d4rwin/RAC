// #include <unistd.h>
#include <stdio.h>
// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
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
        char    str[15] = "Hola que tal";
 
        // putchar(ft_strrev(str));
        // ft_putchar("\n");
        printf("%s\n", ft_strrev(str));
        return (0);
}
