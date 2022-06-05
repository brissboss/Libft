/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissia <tbrissia@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:46:57 by tbrissia          #+#    #+#             */
/*   Updated: 2022/06/05 11:19:58 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	void	*destinations;

	if (!dest && !src)
		return (NULL);
	destinations = dest;
	while (count--)
		*(unsigned char *)dest++ = *(unsigned char *)src++;
	return (destinations);
}
