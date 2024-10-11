/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoldens <cgoldens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:36:25 by cgoldens          #+#    #+#             */
/*   Updated: 2024/10/11 15:17:09 by cgoldens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_nbrlen_base16(unsigned	long long n)
{
	int	l;

	l = 0;
	while (n != 0)
	{
		l++;
		n = n / 16;
	}
	return (l);
}

int	ft_nbrlen_base10(unsigned	int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}
