/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfarah <zfarah@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 10:00:22 by zfarah            #+#    #+#             */
/*   Updated: 2025/05/13 10:00:28 by zfarah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_calloc(size_t nitems, size_t size, char c)
{
	void	*arr;

	if (nitems != 0 && (nitems * size) / nitems != size)
	{
		return (NULL);
	}
	arr = malloc(nitems * size);
	if (arr == 0)
	{
		return (NULL);
	}
	ft_memset(arr, c, nitems * size);
	return (arr);
}
