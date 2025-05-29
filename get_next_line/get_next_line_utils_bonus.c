/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfarah <zfarah@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 19:43:50 by zfarah            #+#    #+#             */
/*   Updated: 2025/05/16 19:43:51 by zfarah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	s_len;
	size_t	size;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		size = 0;
	else if (s_len - start <= len)
		size = s_len - start;
	else
		size = len;
	arr = malloc((size + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < size && s[start + i])
	{
		arr[i] = s[start + i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] == (unsigned char)c)
		{
			return ((char *)(str + i));
		}
		i++;
	}
	if (c == '\0')
		return ((char *)(str + i));
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joint;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joint = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!joint)
		return (NULL);
	ft_memmove(joint, (void *)s1, s1_len);
	ft_memmove(joint + s1_len, (void *)s2, s2_len);
	joint[s1_len + s2_len] = '\0';
	return (joint);
}

void	*ft_memmove(void *dest, void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
