/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:19:44 by oorlov            #+#    #+#             */
/*   Updated: 2018/10/30 14:19:48 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*string;
	int		count;

	count = ft_strlen(str);
	string = (char *)str;
	while (string[count] != ch)
	{
		if (count == 0)
			return (NULL);
		count--;
	}
	return (&string[count]);
}
