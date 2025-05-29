/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfarah <zfarah@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:20:01 by zfarah            #+#    #+#             */
/*   Updated: 2025/05/19 17:40:36 by zfarah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int				i;
	int				num_bits;
	unsigned char	r;

	num_bits = sizeof(octet) * 8;
	r = 0;
	i = 0;
	while (i < num_bits)
	{
		if ((octet & 1 << i))
		{
			r |= 1 << (num_bits - i - 1);
		}
		i++;
	}
	return (r);
}
