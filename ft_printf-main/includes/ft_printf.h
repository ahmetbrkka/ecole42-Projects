/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akara <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:26:43 by akara             #+#    #+#             */
/*   Updated: 2022/08/30 13:26:45 by akara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);
int		print_c(char c);
int		print_s(char *str);
int		print_i(int number);
int		print_hex(unsigned int number, char format);
int		print_p(unsigned long long ptr);
int		print_u(unsigned int n);

#endif
