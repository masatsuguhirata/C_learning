

#include "common.h"
#include "string.h"
#include <stdlib.h>

char *g_p_key;
char *g_p_dict_file;
char g_default_dict_file[] = "./numbers.dict";

extern int	manager_main(char *key);

int			validate_key(char *key)
{
	if (key[0] == '0' && key[1] != '\0')
	{
		return (FALSE);
	}
	if (is_natural_number(key))
	{
		return (TRUE);
	}
	else
	{
		return (FALSE);
	}
}

int			main(int argc, char *argv[])
{
	char *key;

	if ((argc < 2) || (3 < argc))
	{
		return (FALSE);
	}
	key = (argc == 2) ? argv[1] : argv[2];
	g_p_dict_file = (argc == 2) ? g_default_dict_file : argv[1];
	if (validate_key(key) == FALSE)
	{
		putstr(ERR_MSG);
		return (FALSE);
	}
	if (manager_main(key) == FALSE)
	{
		putstr(DICT_ERR_MSG);
		return (FALSE);
	}
	return (TRUE);
}
