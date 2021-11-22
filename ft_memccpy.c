void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];j
		if ((char)src[i] == (char)c)
			return (src + i + 1);
		i++;
	}
	return (NULL);
}
