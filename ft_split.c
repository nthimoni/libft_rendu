/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthimoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:19:56 by nthimoni          #+#    #+#             */
/*   Updated: 2021/11/26 13:28:37 by nthimoni         ###   ########.fr       */
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
	size_t	word_count;
	size_t	i;
	size_t	a;

	if (!s)
		return (NULL);
	word_count = wrdcnt(s, c);
	ret = malloc(sizeof(char *) * (word_count + 1));
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
	ret[word_count] = NULL;
	return (ret);
}
/*
int main()
{
	  char *s1 = "split  ||this|for|me|||||!|";
     int i = 0;
     char **result = ft_split(s1, '|');
 
     while (result[i])
     {
         printf("%s\n", result[i]);
         free(result[i]);
         i++;
     }
     free(result);
 
 

     char *s2 = "      split       this for   me  !       ";
 
     result = ft_split(s2, ' ');
     while (*result)
     {
	 	printf("%s\n", *result);
         result++;
     }

}*/
