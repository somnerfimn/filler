/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 15:43:15 by oorlov            #+#    #+#             */
/*   Updated: 2018/11/03 15:43:16 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		dst[count] = f(s[count]);
		count++;
	}
	return (dst);
}
