/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 20:21:38 by oorlov            #+#    #+#             */
/*   Updated: 2018/10/29 20:21:39 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	s1_end;

	count = 0;
	s1_end = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dst[count] && count < size)
		count++;
	s1_end = count;
	while (src[count - s1_end] && count < size - 1)
	{
		dst[count] = src[count - s1_end];
		count++;
	}
	if (s1_end < size)
		dst[count] = '\0';
	return (s1_end + ft_strlen(src));
}
