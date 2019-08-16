/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 10:00:31 by oorlov            #+#    #+#             */
/*   Updated: 2019/08/01 10:00:33 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

char			*line_info(char *line, t_fill *table)
{
	char		*gen;

	gen = ft_strnew(table->dx);
	gen = ft_strcpy(gen, line);
	return (gen);
}

char			*ft_line_purs(char *line, t_fill *board)
{
	char		*gen;

	gen = ft_strnew(board->dx);
	gen = ft_strcpy(gen, line);
	return (gen);
}

void			token_offset(char *line, t_fill *table)
{
	while (!(ft_isdigit(*line)))
		line++;
	table->piece_y = ft_atoi(line);
	while (ft_isdigit(*line))
		line++;
	line++;
	table->piece_x = ft_atoi(line);
}
