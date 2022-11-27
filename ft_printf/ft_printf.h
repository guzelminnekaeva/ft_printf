/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhizdahr <zhizdahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:32:21 by zhizdahr          #+#    #+#             */
/*   Updated: 2021/12/09 13:57:12 by zhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

void	ft_itoa(int n, int *sum);
int		ft_printf(const char *s, ...);
void	ft_putchar(char c, int *sum);
void	ft_hex_x(unsigned long int n, int *i);
void	ft_hex_xx(unsigned long int n, int *i);
int		ft_hex_pointer(unsigned long int n);
int		ft_hex(unsigned int i_c, char f, int sum);
int		ft_putchar_r(char c);
int		ft_putchar_r(char c);

#endif
