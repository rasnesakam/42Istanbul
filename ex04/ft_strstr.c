int	contains(char *str1, char *str2,int pos)
{
	int i;

	i = pos;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	while (*str != '\0')
	{
		if (str == to_find && equals(str,to_find))
			
		src++;
	}
}
