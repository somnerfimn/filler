/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 16:32:33 by oorlov            #+#    #+#             */
/*   Updated: 2018/10/28 16:32:34 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t	count;
	char	*str;

	count = 0;
	str = (char *)arr;
	while (count < n)
	{
		if (*str == (char)c)
			return ((void *)str);
		str++;
		count++;
	}
	return (NULL);
}
