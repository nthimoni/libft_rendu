/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthimoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:19:56 by nthimoni          #+#    #+#             */
/*   Updated: 2021/11/25 17:34:21 by nthimoni         ###   ########.fr       */
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
	ft_memcpy(wrd, s, len);
	wrd[len] = '\0';
	return (wrd);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	word_count;
	size_t	i;
	size_t	a;

	if (!s)
		return (NULL);
	word_count = wrdcnt(s, c);
	ret = malloc(sizeof(char *) * (word_count + 1));
	i = 0;
	a = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			ret[a++] = cpywrd(s + i, c);
		while (s[i] && s[i] != c)
			i++;
	}
	ret[word_count] = NULL;
	return (ret);
}
