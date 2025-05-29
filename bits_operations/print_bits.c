/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfarah <zfarah@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 19:44:11 by zfarah            #+#    #+#             */
/*   Updated: 2025/05/19 19:59:22 by zfarah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_bits(unsigned char octet)
{
	int	i;

	i = 0;
	while (i < sizeof(octet) * 8)
	{
		if ((octet & 1 << 7 - i))
			ft_putchar_fd('1', 1);
		else
			ft_putchar_fd('0', 1);
		i++;
	}
}
