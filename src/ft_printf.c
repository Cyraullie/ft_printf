/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoldens <cgoldens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:03:59 by cgoldens          #+#    #+#             */
/*   Updated: 2024/10/03 15:08:36 by cgoldens         ###   ########.fr       */
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
	else if (format == 's')
		l += ft_printstr(va_arg(args, char *));
	else if (format == '%')
		l += ft_printpercent();
	else if (format == 'd' || format == 'i')
		l += ft_printnbr(va_arg(args, int));	
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
	while (s[i])
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
	ft_printf("%s", "test");
	ft_printf("%%");
	ft_printf("%d", 42);
	ft_printf("%i", 42);
}
