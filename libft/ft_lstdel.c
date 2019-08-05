/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:34:36 by oorlov            #+#    #+#             */
/*   Updated: 2018/11/05 18:34:37 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_lst **alst, void (*del)(void *, size_t))
{
	t_lst	*tmp;

	tmp = NULL;
	if (alst && del)
		while (*alst)
		{
			tmp = (*alst)->next;
			del((*alst)->content, (*alst)->content_size);
			free(*alst);
			*alst = tmp;
		}
	*alst = NULL;
}
