
#include <unistd.h>
#include "string.h"
#include <stdlib.h>

void	output_value(char *record)
{
	int		i;

	i = 0;
	while ('0' <= record[i] && record[i] <= '9')
	{
		i++;
	}
	while (record[i] == ' ')
	{
		i++;
	}
	i++;
	while (record[i] == ' ')
	{
		i++;
	}
	while (record[i] != '\0')
	{
		write(1, &record[i], 1);
		i++;
	}
	free(record);
}

void	output_values(char **records)
{
	int i;

	i = 0;
	while (records[i] != 0)
	{
		output_value(records[i]);
		i++;
		if (records[i] != 0)
		{
			putstr(" ");
		}
	}
	free(records);
}
