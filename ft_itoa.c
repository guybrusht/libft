#include "libft.h"

static int	revint(int n)
{
	int rev;

	rev = 0;
	while (n > 0)
	{
		rev = rev * 10 + n % 10;
		n = n / 10;
	}
	return rev;
}

static int	intlen(int n)
{
	int		len;

	len = 0;
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	if (sign == -1)
		len++;
	return (len);
}

static char	toa(int n)
{
	return ((char)(n + 0x30));
}

char		*ft_itoa(int n)
{
	int		i;
	int		rev;
	int		len;
	int		sign;
	char	*ptr;

	sign = (n < 0) ? -1 : 1;
	rev = revint(n);
	len = intlen(n);
	if ((ptr = (char*)malloc((len + 1) * sizeof(char))) == NULL)
		return (NULL);
	i = 0
	if (sign == -1)
	{
		ptr[i] = '-';
		i++;
	}
	while (rev > 0)
	{
		ptr[i] = toa(rev % 10);
		i++;
		rev = rev / 10;
	}
	return (ptr);
}
