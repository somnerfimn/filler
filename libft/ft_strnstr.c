/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 17:52:09 by oorlov            #+#    #+#             */
/*   Updated: 2018/10/29 17:52:13 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_tmp(char *str, char *to_find, size_t len)
{
	int		count;
	int		i;
	char	*str1;
	char	*to_find1;

	count = 0;
	i = 0;
	str1 = (char *)str;
	to_find1 = (char *)to_find;
	while (str1[count] != '\0')
	{
		if (count == (int)len)
			return (NULL);
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

char		*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	char	*str1;
	char	*to_find1;
	int		count;
	int		i;

	count = 0;
	i = 0;
	str1 = (char *)str;
	to_find1 = (char *)to_find;
	if (ft_strcmp((char *)str1, (char *)to_find1) == 0)
		return (str1);
	if (ft_strlen(to_find) == 0)
		return (str1);
	if (ft_strlen(to_find) <= ft_strlen(str))
		return (ft_tmp(str1, to_find1, len));
	return (NULL);
}
