/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 14:16:02 by oorlov            #+#    #+#             */
/*   Updated: 2018/10/29 14:16:07 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		count1;
	int		count2;

	count1 = 0;
	count2 = 0;
	while (dest[count1] != '\0')
		count1++;
	while (src[count2] != '\0')
	{
		dest[count1] = src[count2];
		count2++;
		count1++;
	}
	dest[count1] = '\0';
	return (dest);
}
