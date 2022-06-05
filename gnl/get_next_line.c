/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissia <tbrissia@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 10:28:54 by tbrissia          #+#    #+#             */
/*   Updated: 2022/06/05 11:11:33 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*get_next_line(int fd)
{
	static int	nbr;
	static char	buff[1];
	char		*result;

	result = NULL;
	if (nbr == 0)
	{
		nbr = read(fd, buff, 1);
		buff[nbr] = '\0';
	}
	if (nbr > 0 && buff[0] != '\0')
		result = ft_read(fd, buff, result, nbr);
	else
		return (NULL);
	return (result);
}

char	*ft_read(int fd, char *buff, char *result, int nbr)
{
	while (nbr > 0 && ft_strchr(result, '\n'))
	{
		result = ft_strjoin_gnl(result, buff);
		nbr = read(fd, buff, 1);
		buff[nbr] = '\0';
	}
	return (result);
}
