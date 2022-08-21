#include "insurance.h"

static long long	check_len(long long ln, long long len)
{
	if (ln <= 0)
	{
		ln *= -1;
		len++;
	}
	while (ln != 0)
	{
		ln /= 10;
		len++;
	}
	return (len);
}

static void	init_dest(char *dest, long long ln, long long len)
{
	if (ln < 0)
	{
		ln *= -1;
		dest[0] = '-';
	}
	if (ln > 9)
	{
		init_dest(dest, ln / 10, len - 1);
		init_dest(dest, ln % 10, len);
	}
	else
		dest[len] = ln + 48;
}

static char	*jun_itoa(long long ln)
{
	char		*dest;
	long long	len;

	len = 0;
	len = check_len(ln, len);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	dest[len] = '\0';
	init_dest(dest, ln, len - 1);
	return (dest);
}

static long long	check_need_len(char *str)
{
	size_t len = 0;
	size_t count = 0;
	
	len = strlen(str);
	if (len % 3 == 0)
		count = (len / 3) - 1;
	else
		count = len / 3;
	return (len + count);
}

void	jun_init_dest(char *dest, char *str, size_t len)
{
	long long i, dlen, ln;

	i = 1;
	dlen = len - 1;
	ln = len - 2;
	while (dlen >= 0)
	{
		if (i % 4 == 0)
		{
			dest[dlen] = ',';
		}
		else
		{
			dest[dlen] = str[ln];
			ln--;
		}
		dlen--;
		i++;
	}
}

char *jun_make_str(long long src)
{
	size_t len;
	char	*dest, *str;

	str = jun_itoa(src);
	len = check_need_len(str);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	dest[len] = '\0';
	jun_init_dest(dest, str, len);
	return (dest);	
}