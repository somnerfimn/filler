/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 11:13:37 by oorlov            #+#    #+#             */
/*   Updated: 2018/10/28 11:13:44 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char *tmp;

	if (n == 0)
		return (str);
	tmp = (unsigned char *)str;
	while (n != 0)
	{
		*tmp = (unsigned char)c;
		n--;
		if (n)
			tmp++;
	}
	return (str);
}
