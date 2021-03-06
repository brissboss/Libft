/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissia <tbrissia@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 20:06:33 by tbrissia          #+#    #+#             */
/*   Updated: 2022/06/05 11:15:31 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *str, int search)
{
	while (*str)
	{
		if (*str == search)
			return ((char *)str);
		else
			str++;
	}
	if (*str == '\0' && search == '\0')
		return ((char *)str);
	return (0);
}
