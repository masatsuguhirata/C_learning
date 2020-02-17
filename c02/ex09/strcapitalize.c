
char	*strlowcase_ex09(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
	{
		str[i] = str[i] + ('a' - 'A');
	}
	return (str);
}

char	*strupcase_ex09(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - ('a' - 'A');
	}
	return (str);
}

int		determine(char *str, int i)
{
	if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
	{
		return (1);
	}
	else if (str[i] >= '0' && str[i] <= '9')
	{
		return (2);
	}
	else
	{
		return (0);
	}
}

char	*strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && determine(str, 0))
			strupcase_ex09(str, 0);
		if (i > 0 && (determine(str, i - 1) != 1 && determine(str, i) == 1))
			strupcase_ex09(str, i);
		if (i > 0 && (determine(str, i - 1) > 0 && determine(str, i) == 1))
			strlowcase_ex09(str, i);
		i++;
	}
	return (str);
}
