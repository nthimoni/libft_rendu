

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	ret = malloc(nmemb * size);
	ft_bzero(ret, nmemb * size);
	return (ret);
}
