/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 15:32:07 by oorlov            #+#    #+#             */
/*   Updated: 2018/10/31 15:32:08 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	count;

	count = 0;
	str = (char *)malloc(sizeof(*str) * (size + 1));
	if (!str)
		return (NULL);
	while (count < size + 1)
		str[count++] = '\0';
	return (str);
}
