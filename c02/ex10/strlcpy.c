
unsigned int	strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int srcsize;
	unsigned int i;

	srcsize = 0;
	i = 0;
	while (src[srcsize] != '\0')
		srcsize++;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srcsize);
}
