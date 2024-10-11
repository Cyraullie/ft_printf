/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoldens <cgoldens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:03:59 by cgoldens          #+#    #+#             */
/*   Updated: 2024/10/11 16:22:48 by cgoldens         ###   ########.fr       */
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
	if (format == '%')
		l += ft_printchar('%');
	else if (format == 's')
		l += ft_printstr(va_arg(args, char *));
	else if (format == 'c')
		l += ft_printchar(va_arg(args, int));
	else if (format == 'd' || format == 'i')
		l += ft_printnbr(va_arg(args, int));
	else if (format == 'x' || format == 'X')
		l += ft_printhex(va_arg(args, unsigned int), format);
	else if (format == 'p')
		l += ft_printptr(va_arg(args, unsigned long long));
	else if (format == 'u')
		l += ft_printunsigned(va_arg(args, unsigned int));
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
/*
int	main(void)
{
	//ft_printf("%c", 't');
//	printf("\n");
//	ft_printf("%s", "test");
//	printf("\n");
//	ft_printf("%%");
	//ft_printf("\001\002\007\v\010\f\r\n");
	printf("\001\002\007\v\010\f\r\n");
//	printf("\n");
//	ft_printf("%i", 142);
//	printf("\n");
//	ft_printf("%x", 422);
//	printf("\n");
//	ft_printf("%X", 422);
//	printf("\n");
//	ft_printf("%X", 0);
//	printf("\n");
//	ft_printf("%p", "");
//	printf("\n");
//	ft_printf("%u", 5654651);
//	printf("\n");
//	ft_printf("__");
//	ft_printf("\n");
//	ft_printf("__test");
}
*/