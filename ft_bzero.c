#include "ft.h"

void ft_bzero(void *ptr, size_t count)
{
	ft_memset(ptr, 0, count);
}
