/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthimoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:19:56 by nthimoni          #+#    #+#             */
/*   Updated: 2021/11/26 16:18:43 by nthimoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	wrdcnt(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static	size_t	wrdlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static	char	*cpywrd(char const *s, char c)
{
	char	*wrd;
	size_t	len;

	len = wrdlen(s, c);
	wrd = malloc(sizeof(char) * (len + 1));
	if (!wrd)
		return (NULL);
	ft_memcpy(wrd, s, len);
	wrd[len] = '\0';
	return (wrd);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	a;

	ret = malloc(sizeof(char *) * (wrdcnt(s, c) + 1));
	if (!ret)
		return (NULL);
	i = 0;
	a = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			ret[a] = cpywrd(s + i, c);
			if (!ret[a++])
				return (NULL);
		}
		while (s[i] && s[i] != c)
			i++;
	}
	ret[a] = NULL;
	return (ret);
}
