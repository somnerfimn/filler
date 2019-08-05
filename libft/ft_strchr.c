/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 20:48:46 by oorlov            #+#    #+#             */
/*   Updated: 2018/10/29 20:48:48 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char	*string;

	string = (char *)str;
	while (*string != ch)
	{
		if (*string == '\0')
			return (NULL);
		string++;
	}
	return (string);
}
