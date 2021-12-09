/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emakas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:28:20 by emakas            #+#    #+#             */
/*   Updated: 2021/12/09 13:33:15 by emakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_hexstr(int num, int size)
{
	int sub = num
}

// prints address content as character
void ft_print_addr_content_char(void *addr)
{}

// prints address content as double hex
void ft_print_addr_content_hex(void *addr)
{
	void *tmp;

	tmp = addr;
	while (*tmp)
	{
		ft_putchar("0123456789abcdef"[*tmp / 16]);
		ft_putchar("0123456789abcdef"[*tmp % 16]);
		tmp++;
		if (*tmp)
		{
			ft_putchar("0123456789abcdef"[*tmp / 16]);
			ft_putchar("0123456789abcdef"[*tmp % 16]);
		}
		ft_putchar(' ');
	}
}

//prints address of address as hex string
void ft_print_addr_addr(void *addr)
{}

void	ft_print_addr(void *addr)
{
	ft_print_addr_addr(addr);
	write(1,": ",2);
	ft_print_addr_content_hex(addr);
	ft_print_addr_content_char(add);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	while (*addr)
	{
		ft_print_addr(addr);
		ft_putchar('\n');
		addr++;
	}
	return (addr);
}
