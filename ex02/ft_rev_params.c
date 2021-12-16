/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emakas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:22:17 by emakas            #+#    #+#             */
/*   Updated: 2021/12/16 18:26:07 by emakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	putstr(char *str)
{
	while (*str != '\0')
		write (1, str++, 1);
}

int	main(int ac, char **av)
{
	while (ac-- >= 1)
	{
		putstr (av[ac]);
		putstr ("\n");
	}
	return (0);
}
