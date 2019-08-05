/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:54:54 by oorlov            #+#    #+#             */
/*   Updated: 2018/10/30 14:54:58 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned int	tmp;
	unsigned int	res;

	tmp = 0;
	res = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (str1[tmp] == str2[tmp] && tmp < n - 1)
	{
		res = str1[tmp] - str2[tmp];
		if (str1[tmp + 1] == '\0' && str2[tmp + 1] == '\0')
			return (0);
		if ((str1[tmp + 1] == '\0' || str2[tmp + 1] == '\0') && tmp + 1 == n)
			return (res);
		tmp++;
	}
	res = str1[tmp] - str2[tmp];
	return (res);
}
