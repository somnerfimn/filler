/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 16:37:16 by oorlov            #+#    #+#             */
/*   Updated: 2018/11/03 16:37:17 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		count;
	char	*dst;

	count = 0;
	if (!s)
		return (NULL);
	dst = ft_strnew(ft_strlen(s));
	if (!dst)
		return (NULL);
	while (s[count] != '\0')
	{
		dst[count] = f(count, s[count]);
		count++;
	}
	return (dst);
}
