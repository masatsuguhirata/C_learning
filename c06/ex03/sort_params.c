
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void		putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	write(1, str, i);
	write(1, "\n", 1);
}

int			strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void		sort_char_tab(char **argv, int argc)
{
	int		rightmax;
	int		i;
	char	*tmp;

	i = 1;
	rightmax = argc - 1;
	while (rightmax != 1)
	{
		while (i < argc - 1)
		{
			if (strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
			}
			i++;
		}
		rightmax--;
		i = 1;
	}
}

int			main(int argc, char **argv)
{
	int		cnt;

	cnt = 1;
	if (argc == 1)
		return (0);
	sort_char_tab(argv, argc);
	while (cnt < argc)
	{
		putstr(argv[cnt]);
		cnt++;
	}
	return (0);
}
