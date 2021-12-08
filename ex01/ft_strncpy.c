/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emakas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:33:19 by emakas            #+#    #+#             */
/*   Updated: 2021/12/08 17:37:12 by emakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int size)
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
