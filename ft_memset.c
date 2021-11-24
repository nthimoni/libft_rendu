/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthimoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:31:23 by nthimoni          #+#    #+#             */
/*   Updated: 2021/11/23 17:31:28 by nthimoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned int	i;
	char 		*ptr;
	
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
