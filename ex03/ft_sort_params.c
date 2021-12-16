/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emakas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:26:00 by emakas            #+#    #+#             */
/*   Updated: 2021/12/16 18:24:23 by emakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

void	putstr(char *str)
{
	while (*str != '\0')
		write (1, str++, 1);
}

void	ft_swap(char **c1, char **c2)
{
	char	*tmp;

	tmp = *c1;
	*c1 = *c2;
	*c2 = tmp;
}

void	ft_sort(char **strs, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - i)
		{
			if (ft_strcmp (strs[j], strs[j + 1]) > 0)
				ft_swap (&strs[j], &strs[j + 1]);
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	if (ac >= 2)
	{
		ft_sort (av, ac - 1);
		i = 1;
		while (i < ac)
		{
			putstr (av[i++]);
			putstr ("\n");
		}
	}
	return (0);
}
