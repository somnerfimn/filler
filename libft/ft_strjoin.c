/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 17:10:27 by oorlov            #+#    #+#             */
/*   Updated: 2018/11/03 17:10:28 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		count;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	count = 0;
	i = 0;
	dest = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!dest)
		return (NULL);
	while (s1[i] != '\0')
		dest[count++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		dest[count++] = s2[i++];
	dest[count] = '\0';
	return (dest);
}
