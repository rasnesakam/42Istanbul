/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emakas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 20:32:01 by emakas            #+#    #+#             */
/*   Updated: 2021/12/15 20:32:37 by emakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	if (nb < 2)
		return (0);
	n = 2;
	while (n < nb)
	{
		if (nb % n == 0)
			return (1);
		n++;
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime (nb) == 0)
		nb++;
	return (nb);
}
