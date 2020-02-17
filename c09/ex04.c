
void	putchar(char c);

void	one_line(int x, int y, int xx, int yy)
{
	//if ((x == 1 && yy == y) || (y == 1 && xx == x))
	if ((xx == 1 && yy == 1))
	{
		putchar('A');
	}
	else if ((x == 1 && yy == 1) || (y == 1 && xx == 1))
	{
		putchar('C');
	}
	else
	{
		putchar('B');
	}
}

void	first_or_last(int x, int y, int xx, int yy)
{
	if ((xx == x && yy == y) || (xx == 1 && yy == 1))
	{
		putchar('A');
	}
	else if ((xx == 1 && yy == y) || (xx == x && yy == 1))
	{
		putchar('C');
	}
	else if (xx == x || xx == 1 || yy == y || yy == 1)
	{
		putchar('B');
	}
	else
	{
		putchar(' ');
	}
}

void	rush(int x, int y)
{
	int xx;
	int yy;

	yy = y;
	while (yy > 0)
	{
		xx = x;
		while (xx > 0)
		{
			if (x == 1 || y == 1)
			{
				one_line(x, y, xx, yy);
			}
			else
			{
				first_or_last(x, y, xx, yy);
			}
			xx--;
		}
		putchar('\n');
		yy--;
	}
		putchar('\n');
		putchar('\n');
		putchar('\n');
}
