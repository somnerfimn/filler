/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 20:40:49 by oorlov            #+#    #+#             */
/*   Updated: 2018/11/05 20:40:53 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_lst *lst, void (*f)(t_lst *elem))
{
	t_lst	*tmp;

	if (lst)
	{
		tmp = lst;
		while (tmp != NULL)
		{
			f(tmp);
			tmp = tmp->next;
		}
	}
}