
#include <stdio.h>
#include <string.h>

void	sort_int_tab(int *tab, int size)
{
	int tmp;
	int i;
	int j;

	i = 0;
	j = size - 1 - i;
	while (i < size - 1)
	{
		while (j > i)
		{
			if (tab[j - 1] > tab[j])
			{
				tmp = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = tmp;
			}
			j--;
		}
		i++;
		j = size - 1;
	}
}
