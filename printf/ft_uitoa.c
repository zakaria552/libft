/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfarah <zfarah@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 12:35:16 by zfarah            #+#    #+#             */
/*   Updated: 2025/05/09 13:39:57 by zfarah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	str_num_length(unsigned int num)
{
	int	i;

	i = 0;
	if (num == 0)
		i++;
	while (num != 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_uitoa(unsigned int num)
{
	char	*str_num;
	int		str_len;
	long	n;

	str_len = str_num_length(num);
	str_num = malloc((str_len + 1) * sizeof(char));
	n = num;
	if (!str_num)
		return (NULL);
	str_num[str_len] = '\0';
	while (--str_len >= 0)
	{
		str_num[str_len] = n % 10 + '0';
		n = n / 10;
	}
	return (str_num);
}
