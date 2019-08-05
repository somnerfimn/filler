/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:01:26 by oorlov            #+#    #+#             */
/*   Updated: 2018/10/28 17:01:27 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		len;
	char	*dup;

	len = ft_strlen(str);
	dup = (char *)malloc((len + 1) * sizeof(*str));
	if (!dup)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
	{
		dup[len] = str[len];
		len++;
	}
	dup[len] = '\0';
	return (dup);
}
