
#include <stdlib.h>
#include "string.h"
#include "utility.h"

int		divide_num(int num, int *out)
{
	int size;
	int	*p_num;
	int	index;

	size = get_divide_size_for_3digits(num);
	p_num = out;
	index = 0;
	if ((num / 100) > 0)
	{
		p_num[index++] = (num / 100);
		p_num[index++] = 100;
		num %= 100;
	}
	if (num <= 20)
		p_num[index] = num;
	else if ((num / 10) > 1)
	{
		p_num[index++] = num - (num % 10);
		num %= 10;
		if (0 < num)
			p_num[index] = num;
	}
	return (size);
}

int		get_divided_size(char *key)
{
	int		value;
	int		array_size;
	int		cursor;

	cursor = strlen(key) - 1;
	value = 0;
	array_size = 0;
	while (0 <= cursor)
	{
		value *= 10;
		value += (*key++ - '0');
		if (((cursor % 3) == 0) && (value != 0))
		{
			array_size += get_divide_size_for_3digits(value);
			value = 0;
			if (0 < cursor)
			{
				array_size++;
			}
		}
		cursor--;
	}
	return (array_size);
}

void	get_divided_num_array(char *key, int **out)
{
	int		value;
	int		*p_divided_num_array;
	int		count;
	int		array_count;
	int		cursor;

	cursor = strlen(key) - 1;
	array_count = 0;
	value = 0;
	p_divided_num_array = malloc(sizeof(int) * get_divided_size(key));
	while (0 <= cursor)
	{
		value *= 10;
		value += (*key++ - '0');
		if (((cursor % 3) == 0) && (value != 0))
		{
			count = divide_num(value, &(p_divided_num_array[array_count]));
			array_count += count;
			if (0 < cursor)
				p_divided_num_array[array_count++] = -1 * cursor;
			value = 0;
		}
		cursor--;
	}
	*out = p_divided_num_array;
}

char	*strdup_for_rush02(int num)
{
	char	*p_ret_char;
	int		size;
	int		index;

	if (num < 0)
	{
		p_ret_char = get_sep_num(-1 * num);
		return (p_ret_char);
	}
	size = 1;
	if (100 <= num)
		size = 3;
	else if (10 <= num)
		size = 2;
	p_ret_char = malloc(sizeof(char) * (size + 1));
	if (p_ret_char == NULL)
		return (NULL);
	index = size;
	p_ret_char[index] = '\0';
	while ((0 <= --index) && (num != 0))
	{
		p_ret_char[index] = '0' + (num % 10);
		num /= 10;
	}
	return (p_ret_char);
}

char	**divide(char *key)
{
	int		*p_divided_num_array;
	int		array_size;
	int		count;
	char	**pp_ret;

	count = 0;
	array_size = get_divided_size(key);
	get_divided_num_array(key, &p_divided_num_array);
	pp_ret = malloc(sizeof(char *) * (array_size + 1));
	while (count < array_size)
	{
		pp_ret[count] = strdup_for_rush02(p_divided_num_array[count]);
		count++;
	}
	pp_ret[count] = 0;
	free(p_divided_num_array);
	return (pp_ret);
}
