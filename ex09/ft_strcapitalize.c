char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (i == 0 || str[i-1] == ' ')
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
}
