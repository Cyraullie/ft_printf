/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoldens <cgoldens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:29:32 by cgoldens          #+#    #+#             */
/*   Updated: 2024/10/15 15:14:31 by cgoldens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_formats(va_list args, const char format);
int		ft_printchar(int c);
int		ft_printstr(char *s);
int		ft_printnbr(int n);
int		ft_printpercent(void);
int		ft_printhex(unsigned	int n, const	char f);
int		ft_printptr(unsigned	long long ptr);
int		ft_printunsigned(unsigned	int n);
#endif
