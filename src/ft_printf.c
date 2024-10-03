/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoldens <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:03:59 by cgoldens          #+#    #+#             */
/*   Updated: 2024/10/03 13:54:01 by cgoldens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_formats(va_list args, const char format)
{
	int	l;

	l = 0;
	if (format == 'c')
		l += ft_printchar(va_arg(args, int));
	return (l);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	args;
	int		l;

	i = 0;
	l = 0;
	va_start(args, s);
	while(s[i])
	{
		if (s[i] == '%')
		{
			l += ft_formats(args, s[i + 1]);
			i++;
		}
		else
			l += ft_printchar(s[i]);
		i++;
	}
	va_end(args);
	return (l);
}	

int	main(void)
{
	ft_printf("%c", 't');
}
