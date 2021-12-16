/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emakas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:25:11 by emakas            #+#    #+#             */
/*   Updated: 2021/12/16 18:25:38 by emakas           ###   ########.fr       */
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
	int	i;

	i = 1;
	if (ac >= 2)
	{
		while (i < ac)
		{
			putstr (av[i++]);
			putstr ("\n");
		}
	}
	return (0);
}
