/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emakas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:03:46 by emakas            #+#    #+#             */
/*   Updated: 2021/11/29 15:04:53 by emakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putn(int num)
{
	if (num >= 0 && num <= 9)
	{
		ft_putchar(48 + num);
	}
}

void	ft_putnbr(int nbr)
{
	int	n;

	n = nbr;
	if (nbr < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{	
		ft_putnbr(n / 10);
		ft_putn(n % 10);
	}
	else
		ft_putn(n);
}
