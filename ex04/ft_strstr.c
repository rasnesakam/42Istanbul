/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emakas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 13:00:59 by emakas            #+#    #+#             */
/*   Updated: 2021/12/13 17:53:55 by emakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	contains(char *str1, char *str2)
{	
	while (*str1 != '\0' && *str2 != '\0')
	{
		if (*(str1++) != *(str2++))
			return (0);
	}	
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			if (contains (str, to_find) == 1)
				return (str);
		}	
		str++;
	}
	return (0);
}
