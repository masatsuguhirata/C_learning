
char	*strncpy(char *dest, char *src, unsigned int length)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < length)
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
		while (i < length)
		{
			dest[i] = '\0';
			i++;
		}
	return (dest);
}
