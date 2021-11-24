/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthimoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:30:28 by nthimoni          #+#    #+#             */
/*   Updated: 2021/11/24 22:05:50 by nthimoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *pointer, size_t count)
{
	size_t	i;
	char	*ptr;

	if (pointer == NULL)
		return ;
	ptr = (char *)pointer;
	i = 0;
	while (i < count)
	{
		ptr[i] = 0;
		i++;
	}
}
