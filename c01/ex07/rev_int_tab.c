
#include <stdio.h>
#include <string.h>

void	rev_int_tab(int *tab, int size)
{
	int tmp[size];
	int i;

	i = 0;
	while (i < size)
	{
		tmp[size - i - 1] = tab[i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = tmp[i];
		i++;
	}
}
