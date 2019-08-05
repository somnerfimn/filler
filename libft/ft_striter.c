/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 15:24:15 by oorlov            #+#    #+#             */
/*   Updated: 2018/11/03 15:24:16 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int		count;
	int		length;

	count = 0;
	length = 0;
	if (s && f)
	{
		length = (int)ft_strlen(s);
		while (count != length)
			f(&s[count++]);
	}
}
