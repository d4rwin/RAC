// #include <unistd.h>
#include <stdio.h>
// void	ft_putchar(char c)
// {
// 	write (1, &c, 1);
// }



char	*ft_strcpy(char *dest, char *src)
{
	char	*t;

	t = dest;
	while ((*t++ = *src++) != 0);
	return (dest);
}
int main()
{
   char src[40];
   char dest[100];
  
   ft_strcpy(src, "This is tutorialspoint.com");
   ft_strcpy(dest, src);

   printf("Final copied string : %s\n", dest);
   
   return(0);
}


// int main()
// {
// 	char str[15] = {'d', 'e', 'b', 'u', 't', '\0'};
// 	char add[] = {'\n', 'f', 'i', 'n','\0'};

// 	ft_putstr(str);
// 		ft_putchar('\n');

// 	ft_putstr(ft_strcpy(str, add));
// 	ft_putchar('\n');
// 	ft_putstr(strcpy(str, add));
// 	ft_putchar('\n');

// 	return 0;
// }