/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emakas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 17:16:56 by emakas            #+#    #+#             */
/*   Updated: 2021/12/12 18:02:24 by emakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter] != '\0' )
		counter++;
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	while (*dest != '\0')
	{
		dest++;
		i++;
	}
	while (*src != '\0' && i < size - 1)
	{
		*(dest++) = *(src++);
		i++;
	}
	*dest = '\0';
	while (*src != '\0')
	{
		src++;
		i++;
	}
	return (i);
}
