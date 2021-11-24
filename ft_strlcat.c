

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	a;
	unsigned int	lendst;

	if (size <= ft_strlen(dest))
		return (ft_strlen(src) + size);
	a = 0;
	lendst = ft_strlen(dest);
	while (src[a] && (a + lendst) < (size - 1))
	{
		dest[a + lendst] = src[a];
		a++;
	}
	dest[a + lendst] = '\0';
	return (lendst + ft_strlen(src));
}
