/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 15:12:11 by oorlov            #+#    #+#             */
/*   Updated: 2018/10/30 15:12:16 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int							sign;
	unsigned long long int		res;

	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
	|| *str == '\r' || *str == '\f')
		str++;
	res = 0;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		sign = (*str == '-' ? -1 : 1);
		str++;
	}
	while (ft_isdigit(*str))
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	if (res >= 9223372036854775807 && sign == 1)
		return (-1);
	if (res > 9223372036854775807 && sign == -1)
		return (0);
	res *= sign;
	return ((int)res);
}
