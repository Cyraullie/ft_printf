/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoldens <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:25:28 by cgoldens          #+#    #+#             */
/*   Updated: 2024/10/03 14:32:45 by cgoldens         ###   ########.fr       */
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
