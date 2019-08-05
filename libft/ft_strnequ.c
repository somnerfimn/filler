/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 16:51:43 by oorlov            #+#    #+#             */
/*   Updated: 2018/11/03 16:51:44 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int		tmp;

	tmp = 0;
	if (n == 0)
		return (1);
	if (s1 && s2)
	{
		while (s1[tmp] == s2[tmp] && tmp < n)
		{
			if (s1[tmp] == '\0' || (tmp + 1) == n)
				return (1);
			tmp++;
		}
	}
	return (0);
}
