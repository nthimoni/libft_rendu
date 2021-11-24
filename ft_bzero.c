/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthimoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:30:28 by nthimoni          #+#    #+#             */
/*   Updated: 2021/11/23 17:30:36 by nthimoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *pointer, size_t count)
{
	unsigned int	i;
	char 		*ptr;
	
	if (pointer == NULL)
		return;
	ptr = (char *)pointer;
	i = 0;
	while (i < count)
	{
		ptr[i] = 0;
		i++;
	}
}
