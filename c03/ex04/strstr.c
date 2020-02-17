
char	*strstr(char *str, char *to_find)
{
	char *str_start;
	char *to_find_start;

	str_start = str;
	to_find_start = to_find;
	if (*to_find == '\0')
		return (str_start);
	while (*str_start)
	{
		str = str_start;
		while (*str == *to_find)
		{
			str++;
			to_find++;
			if (*to_find == '\0')
				return (str_start);
		}
		str_start++;
		to_find = to_find_start;
	}
	return (0);
}
