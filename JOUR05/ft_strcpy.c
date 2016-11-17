char	*ft_strcpy(char *dest, char *src)
{
	int place;

	place = 0;
	while (src[place] != '\0')
	{
		dest[place] = src[place];
		place++;
	}
	dest[place] = '\0';
	return (dest);
}