
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "stock_str.h"

void		putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	write(1, str, i);
}

void		putnbr(int n)
{
	char	num;

	if (n == -2147483648)
		putstr("-2147483648");
	else if (n < 0)
	{
		write(1, "-", 1);
		putnbr(-n);
	}
	else if (n >= 10)
	{
		putnbr(n / 10);
		num = n % 10 + '0';
		write(1, &num, 1);
	}
	else
	{
		num = n + '0';
		write(1, &num, 1);
	}
}

void		show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str != 0)
	{
		putstr(par[i].str);
		write(1, "\n", 1);
		putnbr(par[i].size);
		write(1, "\n", 1);
		putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

/*
**int			main(int argc,char **argv)
**{
**	t_stock_str *test;
**#if 1
**	test = strs_to_tab(argc, argv);
**#else
**	char **testNULL;
**	printf("1\n");
**	testNULL = 0;
**	printf("1\n");
**	test = strs_to_tab(0, testNULL);
**printf("2\n");
**#endif
**
**	//int i = 0;
**	// for (i = 0; i < argc; i++)
**	// {
**	// 	printf("size	->%d\n", test[i].size);
**	// 	printf("*str	->%s\n", test[i].str);
**	// 	printf("*cpy	->%s\n", test[i].copy);
**	// 	printf("\n");
**	// }
**
**	putstr("\nDO shot_tab\n");
**	show_tab(test);
**	return 0;
**}
*/
