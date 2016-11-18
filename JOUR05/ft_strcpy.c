// #include <unistd.h>
#include <stdio.h>
// void	ft_putchar(char c)
// {
// 	write (1, &c, 1);
// }



char	*ft_strcpy(char *dest, const char *src)
{
	
	while 	((*dest++ = *src++) != 0); 
	return (dest);
}

int main()
{
   char src[12] = {"pouet pouet"};
   char dest[12];
     
   
   printf("original : %s\n", src);
   ft_strcpy(dest, src);

   printf("copie : %s\n", dest);
   printf("rien %c\n", src[8]);
   printf("rien %c\n",dest[8]);
  
   return(0);
}

