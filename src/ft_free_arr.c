/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahermawa <ahermawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 19:05:20 by ahermawa          #+#    #+#             */
/*   Updated: 2022/04/13 16:48:32 by ahermawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_free_arr(char **array, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		ft_bzero(array[i], size);
		i++;
	}
	free(array);
	return (NULL);
}
