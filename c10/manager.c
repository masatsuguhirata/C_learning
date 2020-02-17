
#include "common.h"
#include "string.h"
#include "output.h"
#include <stdlib.h>
#include <unistd.h>

extern	int			validation(void);
extern	char		*find_line(char *key);
extern	char		**divide(char *key);

char				**find_line_multi(char **keys)
{
	char	**pp;
	int		key_size;
	char	*p_num_key;
	char	*p_record;

	pp = keys;
	key_size = 0;
	while (*pp != 0)
	{
		p_num_key = *pp;
		p_record = find_line(p_num_key);
		free(p_num_key);
		if (p_record == NULL)
		{
			return (NULL);
		}
		*pp = p_record;
		pp++;
		key_size++;
	}
	return (keys);
}

int					manager_main(char *key)
{
	char *p_record;
	char **keys;
	char **pp_records;

	if (validation() == FALSE)
	{
		return (FALSE);
	}
	p_record = find_line(key);
	if (p_record != 0)
	{
		output_value(p_record);
		write(1, "\n", 1);
		return (TRUE);
	}
	keys = divide(key);
	pp_records = find_line_multi(keys);
	if (pp_records == NULL)
	{
		return (FALSE);
	}
	output_values(pp_records);
	write(1, "\n", 1);
	return (TRUE);
}
