/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emakas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 12:50:21 by emakas            #+#    #+#             */
/*   Updated: 2021/11/26 12:57:05 by emakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_print_alphabet(void)
{

	char	alphabet;

	alphabet = 'a';
	while(alphabet <= 'z')
	{
	
		ft_putchar(alphabet);
		alphabet++;

	}

}
