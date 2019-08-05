/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 14:36:33 by oorlov            #+#    #+#             */
/*   Updated: 2018/10/29 14:36:35 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_tmp(char *str1, char *to_find1)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (str1[count] != '\0')
	{
		if (str1[count] != to_find1[i] && i != 0)
		{
			count -= i / 2;
			i = 0;
		}
		if (str1[count] == to_find1[i] && to_find1[i] != '\0')
			i++;
		count++;
		if (to_find1[i] == '\0')
			return (&str1[count - i]);
	}
	return (NULL);
}

char		*ft_strstr(const char *str, const char *to_find)
{
	char	*str1;
	char	*to_find1;

	str1 = (char *)str;
	to_find1 = (char *)to_find;
	if (ft_strcmp((char *)str1, (char *)to_find1) == 0)
		return (str1);
	if (ft_strlen(to_find) == 0)
		return (str1);
	return (ft_tmp(str1, to_find1));
}
