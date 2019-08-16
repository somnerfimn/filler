/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   result.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 00:04:22 by oorlov            #+#    #+#             */
/*   Updated: 2019/08/01 00:04:23 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void			solve_result(t_fill *table)
{
	int			x;
	int			y;
	char		tmp;

	tmp = (table->player == 'O') ? 'X' : 'O';
	y = -1;
	table->ex = (table->dx / 2);
	table->ey = (table->dy / 2);
	while (table->map[++y] != NULL)
	{
		x = -1;
		while (table->map[y][++x] != '\0')
			if (table->map[y][x] == (tmp + 32))
			{
				table->ex = x;
				table->ey = y;
				break ;
			}
	}
	helper(table);
}

void			helper(t_fill *table)
{
	int			tmp1;
	int			tmp2;
	t_cord		*lst;

	if (table->curr == NULL)
		return ;
	lst = table->curr;
	while (lst != NULL)
	{
		tmp1 = (table->ex) * (table->ex) - 2 *
			(table->ex) * (lst->x) + (lst->x) * (lst->x);
		tmp2 = (table->ey) * (table->ey) - 2 *
			(table->ey) * (lst->y) + (lst->y) * (lst->y);
		lst->d = ft_rsqrt(tmp1 + tmp2);
		lst = lst->next;
	}
	set_point(table);
}

void			set_point(t_fill *table)
{
	float		d_min;
	int			count;
	int			tmp;
	t_cord		*lst;

	lst = NULL;
	count = 0;
	tmp = 0;
	lst = table->curr;
	d_min = lst->d;
	while (lst != NULL)
	{
		if (d_min > lst->d)
		{
			d_min = lst->d;
			tmp = count;
		}
		lst = lst->next;
		count++;
	}
	count = 0;
	lst = table->curr;
	while (++count < tmp && lst != NULL)
		lst = lst->next;
	send_point(lst);
}

void			send_point(t_cord *lst)
{
	ft_putnbr(lst->y);
	ft_putstr(" ");
	ft_putnbr(lst->x);
	ft_putstr("\n");
}
