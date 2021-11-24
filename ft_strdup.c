
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*ret;
	int		len;

	len = ft_strlen(src);
	ret = (char *)malloc(sizeof(*ret) * (len + 1));
	if (ret)
	{
		ft_strlcpy(ret, src, len + 1);
		return (ret);
	}
	else
		return (0);
}
