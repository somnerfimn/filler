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
	x = 0;
	y = 0;
	table->ex = (table->dx / 2);
	table->ey = (table->dy / 2);
	while (table->map[y] != NULL)
	{
		x = -1;
		while (table->map[y][++x] != '\0')
		{
			if (table->map[y][x] == (tmp + 32))
			{
				table->ex = x;
				table->ey = y;
				break ;
			}
		}
		y++;
	}
	helper(table);
}

void			get_enemy(t_fill *table, int u, t_cord *lst)
{
	float		d_min;
	int			i;

	i = 0;
	lst = table->curr;
	d_min = lst->d;
	while (lst != NULL)
	{
		if (d_min > lst->d)
		{
			d_min = lst->d;
			u = i;
		}
		lst = lst->next;
		i++;
	}
	i = 0;
	lst = table->curr;
	while (++i < u && lst != NULL)
		lst = lst->next;
	ft_putnbr(lst->y);
	ft_putstr(" ");
	ft_putnbr(lst->x);
	ft_putstr("\n");
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
	get_enemy(table, 0, NULL);
}
