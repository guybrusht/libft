#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ptr;

	if ((ptr = (char*)malloc((size + 1) * sizeof(char))) == NULL)
		return (NULL);
	bzero(ptr, size + 1);
	return (ptr);
}
