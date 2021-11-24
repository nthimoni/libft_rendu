/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthimoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:50:14 by nthimoni          #+#    #+#             */
/*   Updated: 2021/11/24 22:01:48 by nthimoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	isin(char a, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == a)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*ret;

	start = 0;
	while (isin(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (isin(s1[end], set))
		end--;
	ret = malloc(end - start + 1 + 1);
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, s1 + start, end - start + 1 + 1);
	return (ret);
}
