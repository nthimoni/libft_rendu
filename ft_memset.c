#include <string.h>

void *ft_memset(void *pointer, int value, size_t count)
{
	unsigned int i;
	char *ptr;
	
	if (pointer == NULL)
		return (NULL);
	ptr = (char *)pointer;
	i = 0;
	while (i < count)
	{
		ptr[i] = (char)value;
		i++;
	}
	return (pointer);
}
