
#include "common.h"

int		strcmp_rush(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
	}
	if (*s1 == '\0' && !(*s2 >= '0' && *s2 <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		judge_dict_line(char *key, char *record)
{
	if (strcmp_rush(key, record) == 1)
	{
		return (TRUE);
	}
	return (FALSE);
}
