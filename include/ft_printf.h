/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoldens <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:29:32 by cgoldens          #+#    #+#             */
/*   Updated: 2024/10/10 16:28:44 by cgoldens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
//TODO put all len in utils
int		ft_printf(const char *format, ...);
int		ft_formats(va_list args, const char format);
int		ft_printchar(int c);

int		ft_putstr(char *s);
int		ft_printstr(char *s);
int		ft_printnbr(int n);
int		ft_printpercent(void);
int		ft_printhex(unsigned	int n, const	char f);
void	ft_puthex(unsigned	int n, const	char f);
int		ft_printptr(unsigned	long long ptr);
int		ft_nbrlen(unsigned	int n);
void	ft_putptr(uintptr_t num);
#endif
