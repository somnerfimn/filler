/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 23:19:57 by oorlov            #+#    #+#             */
/*   Updated: 2019/07/31 23:19:59 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void			check_me(int fd, t_fill *table)
{
	char		*line;
	int			ret;

	ret = get_next_line(fd, &line);
	if (ret == 0)
		exit(0);
	if (ft_strstr(line, "$$$"))
	{
		if (ft_strstr(line, "p1"))
			table->player = 'O';
		else if (ft_strstr(line, "p2"))
			table->player = 'X';
	}
	(ret > 0) ? free(line) : 0;
}

int				main(void)
{
	t_fill		table;
	int			fd;

	fd = 0;
	check_me(fd, &table);
	while (-42)
	{
		table.map = get_map(fd, &table);
		table.figure = get_figure(fd, &table);
		table.curr = NULL;
		table.last = NULL;
		init_algotithm(&table);
		free_struct(&table);
	}
	return (0);
}
