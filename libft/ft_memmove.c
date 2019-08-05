/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 15:19:42 by oorlov            #+#    #+#             */
/*   Updated: 2018/10/28 15:19:44 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t len)
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
