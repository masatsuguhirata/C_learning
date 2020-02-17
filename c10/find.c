
#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "string.h"
#include "utility.h"

char	*g_p_dict_file;
int		judge_dict_line(char *key, char *record);

char	*find_line(char *key)
{
	FILE	*fp;
	char	buff[MAX_RECORD_SIZE];
	char	*record;
	int		length;

	record = NULL;
	fp = fopen(g_p_dict_file, "r");
	while ((fgets(buff, MAX_RECORD_SIZE, fp) != NULL))
	{
		modify_endofline(buff);
		length = strlen(buff);
		if (judge_dict_line(key, buff) == TRUE)
		{
			record = (char*)malloc(length + 1);
			strcpy(record, buff);
			break ;
		}
	}
	fclose(fp);
	return (record);
}
