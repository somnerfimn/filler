/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 23:32:34 by oorlov            #+#    #+#             */
/*   Updated: 2019/07/31 23:32:36 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

char			*make_line(char *line, t_fill *table)
{
	char		*gen;

	gen = ft_strnew(table->dx);
	while (*line && *line != '.' && *line != 'X' &&
		*line != 'x' && *line != 'O' && *line != 'o')
		line++;
	gen = ft_strcpy(gen, line);
	return (gen);
}

void			count_line(int fd, t_fill *table)
{
	int			ret;
	char		*line;
	char		*tmp;

	ret = get_next_line(fd, &line);
	tmp = line;
	while (!(ft_isdigit(*line)))
		line++;
	table->dy = ft_atoi(line);
	while (ft_isdigit(*line))
		line++;
	table->dx = ft_atoi(line + 1);
	(ret > 0) ? free(tmp) : 0;
}

char			**get_figure(int fd, t_fill *table)
{
	char		**piece;
	char		*line;
	int			ret;
	int			i;

	ret = get_next_line(fd, &line);
	token_offset(line, table);
	i = 0;
	piece = (char **)malloc(sizeof(char *) * (table->piece_y + 1));
	(ret > 0) ? free(line) : 0;
	while ((i < (table->piece_y)) && (ret > 0))
	{
		ret = get_next_line(fd, &line);
		piece[i] = ft_line_purs(line, table);
		(ret > 0) ? free(line) : 0;
		i++;
	}
	piece[i] = NULL;
	return (piece);
}

char			**get_map(int fd, t_fill *table)
{
	char		**map;
	char		*line;
	int			ret;
	int			i;

	i = 0;
	count_line(fd, table);
	map = (char **)malloc(sizeof(char *) * (table->dy + 1));
	ret = get_next_line(fd, &line);
	(ret > 0) ? free(line) : 0;
	while ((i < (table->dy)) && (ret > 0))
	{
		ret = get_next_line(fd, &line);
		map[i++] = make_line(line, table);
		(ret > 0) ? free(line) : 0;
	}
	map[i] = NULL;
	return (map);
}
