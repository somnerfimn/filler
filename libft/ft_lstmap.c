/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 20:53:26 by oorlov            #+#    #+#             */
/*   Updated: 2018/11/05 20:53:28 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lstmap(t_lst *lst, t_lst *(*f)(t_lst *elem))
{
	t_lst *alst;
	t_lst *tmp;
	t_lst *first;

	if (!lst)
		return (NULL);
	tmp = f(lst);
	alst = ft_lstnew(tmp->content, tmp->content_size);
	if (!alst)
		return (NULL);
	first = alst;
	lst = lst->next;
	while (lst)
	{
		tmp = f(lst);
		alst->next = ft_lstnew(tmp->content, tmp->content_size);
		if (!alst->next)
			return (NULL);
		alst = alst->next;
		lst = lst->next;
	}
	return (first);
}
