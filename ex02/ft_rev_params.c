/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emakas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:22:17 by emakas            #+#    #+#             */
/*   Updated: 2021/12/16 19:51:43 by emakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		write(1, &str[n++], 1);
	return ;
}

int	main(int argc, char *argv[])
{
	while (argc > 1)
	{	
		ft_putstr(argv[--argc]);
		ft_putstr("\n");
	}
	return (0);
}
