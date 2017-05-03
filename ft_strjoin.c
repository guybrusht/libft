#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;

	if ((ptr = (char*)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char))) == NULL)
		return (NULL);
	ft_strcat(ptr, s1);
	ft_strcat(ptr, s2);
	ptr[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (ptr);
}

