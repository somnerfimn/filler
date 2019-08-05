/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 17:58:01 by oorlov            #+#    #+#             */
/*   Updated: 2018/11/03 17:58:03 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_start_and_back(char const *s)
{
	int		result;
	int		i;
	int		n;

	result = 0;
	i = 0;
	n = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	result = i;
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			n++;
		else
			n = 0;
		i++;
	}
	result += n;
	return (result);
}

char			*ft_strtrim(char const *s)
{
	char	*dest;
	int		count;
	int		i;
	int		back;

	count = 0;
	i = 0;
	back = 0;
	if (!s)
		return (NULL);
	dest = ft_strnew(ft_strlen(s) - ft_start_and_back(s));
	if (!dest)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			back++;
		else
			back = 0;
		dest[count++] = s[i++];
	}
	dest[count - back] = '\0';
	return (dest);
}
