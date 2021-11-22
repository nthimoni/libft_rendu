#include <stdlib>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	int i;
	char *temp;

	temp = (char *)malloc(n);
	if (!temp)
		return (NULL);
	i = 0;
	while (i < n)
	{
		temp[i] = src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dest[i] = temp[i];
		i++;
	}
	return (dest);
}
