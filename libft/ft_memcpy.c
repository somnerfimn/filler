/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 12:44:29 by oorlov            #+#    #+#             */
/*   Updated: 2018/10/28 12:44:30 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t len)
{
	unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char *)destination;
	src = (unsigned char *)source;
	if (dst <= src || dst >= (src + len))
	{
		while (len--)
			*dst++ = *src++;
	}
	else
	{
		dst += len - 1;
		src += len - 1;
		while (len--)
			*dst-- = *src--;
	}
	return (destination);
}
