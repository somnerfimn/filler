/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 06:59:42 by oorlov            #+#    #+#             */
/*   Updated: 2019/08/06 06:59:43 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void			free_struct(t_fill *table)
{
	int			i;
	t_cord		*dell;

	i = 0;
	free(table->x_p);
	free(table->y_p);
	table->x_p = NULL;
	table->y_p = NULL;
	while (table->map[i] != NULL)
		ft_strdel(&table->map[i++]);
	free(table->map);
	table->map = NULL;
	i = 0;
	while (table->figure[i] != NULL)
		ft_strdel(&table->figure[i++]);
	free(table->figure);
	table->figure = NULL;
	while (table->curr != NULL)
	{
		dell = table->curr;
		table->curr = table->curr->next;
		free(dell);
	}
	table->curr = NULL;
	table->last = NULL;
}
