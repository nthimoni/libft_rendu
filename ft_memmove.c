
#include "libft.h"
#include <unistd.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char		*s;
	char		*d;
	unsigned int i;

	i = 0;
	s = (char *)src;
	d = (char *)dest;
	if (dest == NULL || src == NULL)
		return (NULL);
	if (src < dest)
	{
		while (n-- > 0)
			d[n] = s[n];
		return (dest);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
