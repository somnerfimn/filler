/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 16:41:18 by oorlov            #+#    #+#             */
/*   Updated: 2018/11/03 16:41:19 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	unsigned int		tmp;

	tmp = 0;
	if (s1 && s2)
	{
		while (s1[tmp] == s2[tmp])
		{
			if (s1[tmp] == '\0')
				return (1);
			tmp++;
		}
	}
	return (0);
}
