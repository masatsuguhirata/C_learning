
#include <stdio.h>
#include <stdlib.h>
#include "stock_str.h"

int					strlen(char *str)
{
	int				count;

	count = 0;
	while (str[count] != 0)
	{
		count++;
	}
	return (count);
}

char				*strdup(char *src)
{
	int				size;
	char			*dest;
	int				i;

	size = strlen(src);
	dest = (char*)malloc(sizeof(char) * (size + 1));
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*strs_to_tab(int ac, char **av)
{
	t_stock_str		*structpointer;
	int				i;

	structpointer = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (structpointer == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		structpointer[i].size = strlen(av[i]);
		structpointer[i].str = av[i];
		structpointer[i].copy = strdup(av[i]);
		i++;
	}
	structpointer[i].size = 0;
	structpointer[i].str = 0;
	structpointer[i].copy = 0;
	return (structpointer);
}

/*
**int		main(int argc,char **argv)
**{
**	t_stock_str *test;
**
**	test = strs_to_tab(argc, argv);
**	int i = 0;
**	for (i = 0; i < argc; i++)
**	{
**		printf("size	->%d\n", test[i].size);
**		printf("*str	->%s\n", test[i].str);
**		printf("*cpy	->%s\n", test[i].copy);
**		printf("\n");
**	}
**	return 0;
**}
*/
