
#include <stdlib.h>

char	*get_sep_num(int num)
{
	char	*sep_num;
	int		i;

	if (num < 1)
	{
		return (0);
	}
	i = 1;
	sep_num = (char*)malloc(sizeof(char) * (num + 2));
	if (sep_num == NULL)
	{
		return (0);
	}
	sep_num[0] = '1';
	while (num)
	{
		sep_num[i] = '0';
		num--;
		i++;
	}
	sep_num[i] = '\0';
	return (sep_num);
}

void	modify_endofline(char *record)
{
	while (*record != '\n')
	{
		record++;
	}
	if (*record == '\n')
	{
		*record = '\0';
	}
}

int		get_divide_size_for_3digits(int num)
{
	int size;
	int	*p_num;

	size = 0;
	p_num = 0;
	if ((num / 100) > 0)
	{
		size += 2;
		num %= 100;
	}
	if (num == 0)
		return (size);
	if ((num <= 19) || ((num % 10) == 0))
	{
		size++;
	}
	else if (num != 0)
	{
		size += 2;
	}
	return (size);
}
