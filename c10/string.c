
#include <unistd.h>
#include "common.h"

void	putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int		is_natural_number(char *num)
{
	int		i;

	i = 0;
	while (num[i] != '\0')
	{
		if (!(num[i] >= '0' && num[i] <= '9'))
		{
			return (TRUE);
		}
		i++;
	}
	return (FALSE);
}

char	*strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		strlen(char *str)
{
	char	*p_current;
	int		length;

	p_current = str;
	length = 0;
	while (*p_current != '\0')
	{
		length++;
		p_current++;
	}
	return (length);
}
