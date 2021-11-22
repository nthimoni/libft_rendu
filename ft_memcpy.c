#include "ft.h"

void *ft_memcpy(void *destination, const void *source, size_t size)
{
	int i;

	if (destination == NULL || source == NULL)
		return (NULL);
	while (i < size)
	{
		destination[i] = source[i];
		i++;
	}
	return (destination);
}
