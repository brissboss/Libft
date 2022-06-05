/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissia <tbrissia@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:23:31 by tbrissia          #+#    #+#             */
/*   Updated: 2022/06/05 11:20:01 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	char	*dst;
	char	*src;

	src = (char *)source;
	dst = (char *)destination;
	if (!destination && !source)
		return (destination);
	if (src < dst)
	{
		while (size-- > 0)
			dst[size] = src[size];
	}
	else
		ft_memcpy(destination, (void *)source, size);
	destination = (void *)dst;
	return (destination);
}
