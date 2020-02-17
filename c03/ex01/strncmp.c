
int		strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int cnt;

	cnt = 0;
	while (*s1 && *s2 && cnt < n)
	{
		if (*s1 != *s2)
		{
			if ((*s1 - *s2) > 0)
				return (1);
			else if ((*s1 - *s2) < 0)
				return (-1);
		}
		s1++;
		s2++;
		cnt++;
	}
	if ((*s1 != *s2) && !(cnt == n))
	{
		if ((*s1 - *s2) > 0)
			return (1);
		else if ((*s1 - *s2) < 0)
			return (-1);
	}
	return (0);
}
