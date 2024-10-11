/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoldens <cgoldens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:29:32 by cgoldens          #+#    #+#             */
/*   Updated: 2024/10/11 15:45:31 by cgoldens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

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
int		ft_nbrlen_base16(unsigned	long long n);
int		ft_nbrlen_base10(unsigned	int num);
void	ft_putptr(uintptr_t num);
char	*ft_uitoa(unsigned	int n);
int		ft_printunsigned(unsigned	int n);
#endif
