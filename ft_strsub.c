#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if ((ptr = (char*)malloc((len + 1) * sizeof(char))) == NULL)
		return (NULL);
	ft_strncpy(ptr, s + start, len);
	ptr[len] = '\0';
	return (ptr);
}
