/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissia <tbrissia@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 22:56:09 by tbrissia          #+#    #+#             */
/*   Updated: 2022/06/05 11:15:40 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;
	int	j;

	i = 0;
	if (s != NULL && f != NULL)
	{
		j = ft_strlen(s);
		while (i < j)
		{
			(*f)(i, s);
			i++;
			s++;
		}
	}
}
