/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoldens <cgoldens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:08:30 by cgoldens          #+#    #+#             */
/*   Updated: 2024/10/11 15:15:20 by cgoldens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	ft_putptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_putptr(num / 16);
		ft_putptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_printptr(unsigned long long ptr)
{
	int	print_length;

	print_length = 0;
	print_length += write(1, "0x", 2);
	if (ptr == 0)
		print_length += write(1, "0", 1);
	else
	{
		print_length += ft_nbrlen_base16(ptr);
		ft_putptr(ptr);
	}
	return (print_length);
}

char	*ft_uitoa(unsigned	int n)
{
	char	*num;
	int		l;

	l = ft_nbrlen_base10(n);
	num = (char *)malloc(sizeof(char) * (l + 1));
	if (!num)
		return (0);
	num[l] = '\0';
	while (n != 0)
	{
		num[l - 1] = n % 10 + 48;
		n = n / 10;
		l--;
	}
	return (num);
}

int	ft_printunsigned(unsigned	int n)
{
	int		l;
	char	*num;

	l = 0;
	if (n == 0)
		l += ft_printchar('0');
	else
	{
		num = ft_uitoa(n);
		l += ft_printstr(num);
		free(num);
	}
	return (l);
}
