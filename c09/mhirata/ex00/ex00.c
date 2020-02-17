
void	putchar(char c);

void	coordinate_decision(int i, int j, int x, int y)
{
	if ((i == 0 || i == x - 1) && (j == 0 || j == y - 1))
	{
		putchar('o');
	}
	else if (i == 0 || i == x - 1)
	{
		putchar('|');
	}
	else if (j == 0 || j == y - 1)
	{
		putchar('-');
	}
	else
	{
		putchar(' ');
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < y)
	{
		while (i < x)
		{
			coordinate_decision(i, j, x, y);
			i++;
		}
		i = 0;
		putchar('\n');
		j++;
	}
}
