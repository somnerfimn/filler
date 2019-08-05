/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 13:36:53 by oorlov            #+#    #+#             */
/*   Updated: 2018/10/31 13:36:54 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;

	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str || size > 1024 * 1024)
		return (NULL);
	ft_bzero(str, size);
	str[size + 1] = '\0';
	return (str);
}
