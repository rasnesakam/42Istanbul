/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emakas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:26:19 by emakas            #+#    #+#             */
/*   Updated: 2021/12/13 17:49:56 by emakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	srci;

	i = 0;
	srci = 0;
	while (dest[i] != '\0')
		i++;
	while (src[srci] != '\0' && srci < nb)
	{
		dest[srci + i] = src[srci];
		srci++;
	}
	dest[srci + i] = '\0';
	return (dest);
}
