
#include <stdlib.h>
#include <stdio.h>
#include "common.h"
#include "utility.h"
#define END_CHAR_CODE '\0'

extern	char	*g_p_dict_file;
extern	int		validate_dict_line(char *record);

int		validation(void)
{
	FILE	*fp;
	char	record[MAX_RECORD_SIZE];
	int		cntline;

	cntline = 0;
	fp = fopen(g_p_dict_file, "r");
	if (fp == NULL)
		return (FALSE);
	while ((fgets(record, MAX_RECORD_SIZE, fp) != NULL))
		cntline++;
	if (cntline == 0 && *record == '\0')
		return (FALSE);
	while ((fgets(record, MAX_RECORD_SIZE, fp) != NULL))
	{
		modify_endofline(record);
		if (validate_dict_line(record) == FALSE)
		{
			fclose(fp);
			return (FALSE);
		}
	}
	fclose(fp);
	return (TRUE);
}

int		validate_dict_line(char *str)
{
	int	i;

	i = 0;
	if (str[0] == END_CHAR_CODE)
		return (TRUE);
	if (!('0' <= str[0] && str[0] <= '9'))
		return (FALSE);
	while ('0' <= str[i] && str[i] <= '9')
		i++;
	while (str[i] == ' ')
		i++;
	if (str[i] != ':')
		return (FALSE);
	i++;
	while (str[i] == ' ')
		i++;
	if (str[i] == '\0')
		return (FALSE);
	while (str[i] != END_CHAR_CODE)
	{
		if (!(' ' <= str[i] && str[i] <= '~'))
			return (FALSE);
		i++;
	}
	return (TRUE);
}
