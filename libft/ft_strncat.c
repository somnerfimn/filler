/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 19:48:19 by oorlov            #+#    #+#             */
/*   Updated: 2018/10/29 19:48:24 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t len)
{
	int		count1;
	int		count2;

	count1 = 0;
	count2 = 0;
	while (dest[count1] != '\0')
		count1++;
	while (src[count2] != '\0' && count2 < (int)len)
	{
		dest[count1] = src[count2];
		count2++;
		count1++;
	}
	dest[count1] = '\0';
	return (dest);
}
