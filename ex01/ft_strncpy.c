char *ft_strncpy(char *dest, char *src, unsigned int size)
{
	int	index;

	index = 0;
	while (index < size && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < size)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
