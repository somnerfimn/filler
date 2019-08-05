/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorith.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 23:49:08 by oorlov            #+#    #+#             */
/*   Updated: 2019/07/31 23:49:09 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void			best_place(t_fill *table, int x, int y)
{
	t_cord		*new;

	new = (t_cord*)malloc(sizeof(t_cord));
	new->x = x;
	new->y = y;
	new->next = NULL;
	if (table->curr == NULL)
	{
		table->curr = new;
		table->last = new;
	}
	else
	{
		table->last->next = new;
		table->last = table->last->next;
	}
}

void			position(t_fill *table, int x, int y, int n)
{
	int			i;
	int			xy[2];
	int			tmp[2];

	tmp[0] = x;
	tmp[1] = y;
	while (++n < table->len)
	{
		xy[0] = tmp[0] - table->x_p[n];
		xy[1] = tmp[1] - table->y_p[n];
		i = -1;
		while (++i < table->len)
		{
			if (i == n)
				continue ;
			x = xy[0] + table->x_p[i];
			y = xy[1] + table->y_p[i];
			if (x < 0 || y < 0 || y >= table->dy ||
				x >= table->dx || table->map[y][x] != '.')
				break ;
		}
		if (i == table->len)
			best_place(table, xy[0], xy[1]);
	}
}

void			find_place(t_fill *table, int len)
{
	int			x;
	int			y;
	int			i;

	i = 0;
	y = 0;
	x = 0;
	table->x_p = (int *)malloc(sizeof(int) * len);
	table->y_p = (int *)malloc(sizeof(int) * len);
	while (table->figure[y] != NULL)
	{
		while (table->figure[y][x] != '\0')
		{
			if (table->figure[y][x] == '*')
			{
				table->x_p[i] = x;
				table->y_p[i] = y;
				i++;
			}
			x++;
		}
		x = 0;
		y++;
	}
}

void			strategy(t_fill *table)
{
	int			x;
	int			y;

	y = 0;
	x = 0;
	table->len = 0;
	while (table->figure[y] != NULL)
	{
		while (table->figure[y][x] != '\0')
			(table->figure[y][x++] == '*') ? table->len++ : 0;
		x = 0;
		y++;
	}
	find_place(table, table->len);
}

void			init_algotithm(t_fill *table)
{
	int			i;
	int			j;

	j = 0;
	strategy(table);
	while (j < table->dy)
	{
		i = -1;
		while (++i < table->dx)
		{
			if ((table->map[j][i] == table->player) ||
				(table->map[j][i] == (table->player + 32)))
				position(table, i, j, -1);
		}
		j++;
	}
	if (table->curr == NULL)
	{
		ft_putstr("0 0\n");
		exit(0);
	}
	solve_result(table);
}
