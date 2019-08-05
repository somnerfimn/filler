/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 13:13:49 by oorlov            #+#    #+#             */
/*   Updated: 2018/10/28 13:13:50 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *destination, const void *source, int c, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;
	size_t			count;
	size_t			hi;

	count = 0;
	hi = 0;
	dst = destination;
	src = (unsigned char *)source;
	while (count != n)
	{
		if (*src != (unsigned char)c)
			hi++;
		if (*src == (unsigned char)c)
		{
			*dst++ = *src++;
			return (dst);
		}
		*dst++ = *src++;
		count++;
	}
	if (hi == n || n == 0)
		return (NULL);
	return (destination);
}
