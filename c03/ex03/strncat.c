
char	*strncat(char *dest, char *src, unsigned int nb)
{
	char			*deststart;
	unsigned	int	cnt;

	cnt = 0;
	deststart = dest;
	while (*dest)
		dest++;
	while (*src != '\0' && cnt < nb)
	{
		*dest = *src;
		dest++;
		src++;
		cnt++;
	}
	*dest = '\0';
	return (deststart);
}
