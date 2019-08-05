/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 16:57:14 by oorlov            #+#    #+#             */
/*   Updated: 2018/11/03 16:57:15 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	char	*dest;

	count = 0;
	dest = ft_strnew(len);
	if (!dest || !s)
		return (NULL);
	while (count < (unsigned int)len)
		dest[count++] = s[start++];
	dest[count] = '\0';
	return (dest);
}
