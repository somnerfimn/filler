/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:35:20 by oorlov            #+#    #+#             */
/*   Updated: 2018/10/28 17:35:22 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int					tmp;
	unsigned char		*str1;
	unsigned char		*str2;

	tmp = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str1[tmp] == str2[tmp])
	{
		if (str1[tmp] == '\0')
			return (0);
		tmp++;
	}
	return (str1[tmp] - str2[tmp]);
}
