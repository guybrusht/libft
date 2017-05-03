#include "libft.h"

void    *ft_memalloc(size_t size)
{
	void	*ptr;

	if ((ptr = (char*)malloc(size * sizeof(char))) == NULL)
		return (NULL);
	bzero(ptr, size);
	return (ptr);
}
