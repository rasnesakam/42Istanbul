#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		int	tmp;
		int *first;
		int *last;

		first = (tab + i);
		last = (tab + (size - (i+1)));
		tmp = *first;
		*first = *last;
		*last = tmp;
		i++;
	}
}
