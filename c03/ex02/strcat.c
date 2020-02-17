
char	*strcat(char *dest, char *src)
{
	char *deststart;

	deststart = dest;
	while (*dest)
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (deststart);
}
