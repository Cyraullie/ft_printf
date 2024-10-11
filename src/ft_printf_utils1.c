/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoldens <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:25:28 by cgoldens          #+#    #+#             */
/*   Updated: 2024/10/11 14:47:22 by cgoldens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i += ft_printchar(s[i]);
	return (i);
}

int	ft_printstr(char *s)
{
	if (s == NULL)
		return (ft_putstr("(null)"));
	return (ft_putstr(s));
}

int	ft_printnbr(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	len = ft_printstr(num);
	free(num);
	return (len);
}

void	ft_puthex(unsigned	int n, const	char f)
{
	if (n >= 16)
	{
		ft_puthex(n / 16, f);
		ft_puthex(n % 16, f);
	}
	else
	{
		if (n <= 9)
			ft_printchar(n + '0');
		else
		{
			if (f == 'x')
				ft_printchar(n - 10 + 'a');
			if (f == 'X')
				ft_printchar(n - 10 + 'A');
		}
	}
}

int	ft_printhex(unsigned	int n, const	char f)
{
	if (!n)
		return (ft_printchar('0'));
	else
		ft_puthex(n, f);
	return (ft_nbrlen_base16(n));
}
