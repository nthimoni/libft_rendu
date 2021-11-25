/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthimoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:30:28 by nthimoni          #+#    #+#             */
/*   Updated: 2021/11/25 17:40:54 by nthimoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *pointer, size_t count)
{
	char	*ptr;

	if (pointer == NULL)
		return ;
	ptr = (char *)pointer;
	while (count--)
		ptr[count] = 0;
}
