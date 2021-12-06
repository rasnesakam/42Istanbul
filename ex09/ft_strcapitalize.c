int	isalphanumeric(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (i == 0 || isalphanumeric(str[i-1]) == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 32;
			}
		}
		i++;
	}
	return (str);
}
