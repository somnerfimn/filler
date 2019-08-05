/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 15:35:33 by oorlov            #+#    #+#             */
/*   Updated: 2018/11/03 15:35:34 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int		count;
	unsigned int		length;

	count = 0;
	length = 0;
	if (s && f != NULL)
	{
		length = ft_strlen(s);
		while (count != length)
		{
			f(count, &s[count]);
			count++;
		}
	}
}
