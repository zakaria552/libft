/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfarah <zfarah@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:24:49 by zfarah            #+#    #+#             */
/*   Updated: 2025/05/14 09:59:18 by zfarah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

// main function
int		ft_printf(const char *str, ...);

// format handlers
int		print_c(int c);
int		print_str(char *str, bool should_free);
int		print_ptr(void *ptr);
int		print_int(int num);
int		print_unsigned_int(unsigned int num);
int		print_hex_case(unsigned long num, bool capitalized);
void	rev_hex_str(char *str);

// libft
size_t	ft_strlen(const char *s);
char	*ft_uitoa(unsigned int num);
char	*ft_itoa(int num);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_calloc(size_t nitems, size_t size, char c);

#endif
