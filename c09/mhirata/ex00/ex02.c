

void	putchar(char c);

void	rush(int x, int y){
	int i=0,j=0;
	while (j<y){
		while(i<x){
			if (i==0 && j==0){
				putchar('A');
			}else if(i==x-1 && j==0){
				putchar('A');
			}
			else if(i==0 && j==y-1){
				putchar('C');
			}
			else if(i==x-1 && j==y-1){
				putchar('C');
			}
			else if(i==0 || j==0 || i==x-1 || j==y-1){
				putchar('B');
			}
			else
			{
				putchar(' ');
			}
		i++;
		}
	i=0;
	putchar('\n');
	j++;
	}
	putchar('\n');
	putchar('\n');

}

/*
void	first_or_last(int x, int y, int xx, int yy)
{
	if ((xx == x && yy == y) || (xx == 1 && yy == y))
	{
		putchar('A');
	}
	else if ((xx == x && yy == 1) || (xx == 1 && yy == 1))
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
			first_or_last(x, y, xx, yy);
			xx--;
		}
		putchar('\n');
		yy--;
	}
}
*/
