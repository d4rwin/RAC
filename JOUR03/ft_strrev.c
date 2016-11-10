#include <unistd.h>
#include <stdio.h>
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
        char    str1[] = "Hola que tal";
 
        printf("%s\n", ft_strrev(str1));
        return (0);
}
