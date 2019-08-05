/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 23:24:20 by oorlov            #+#    #+#             */
/*   Updated: 2019/07/31 23:24:21 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# define ABS(x) x < 0 ? -x : x
#include <string.h>
#include <stdlib.h>
#include "libft/libft.h"

typedef struct		s_cord
{
	int				x;
	int				y;
	float			d;
	struct s_cord	*next;
}					t_cord;

typedef struct		s_fill
{
	char			player;
	int				dx;
	int				dy;
	int				piece_x;
	int				piece_y;
	int				len;
	int				*x_p;
	int				*y_p;
	int				ex;
	int				ey;
	char			**map;
	char			**figure;
	t_cord			*curr;
	t_cord			*last;
}					t_fill;

char				**get_map(int fd, t_fill *board);

char				**get_figure(int fd, t_fill *board);

void				solve_result(t_fill *table);

void				free_struct(t_fill *table);

void				check_me(int fd, t_fill *table);

char				*make_line(char *line, t_fill *board);

void				init_algotithm(t_fill *table);

void				count_line(int fd, t_fill *board);

char				*line_info(char *line, t_fill *board);

char				**get_figure(int fd, t_fill *board);

char				*ft_line_purs(char *line, t_fill *board);

void				helper(t_fill *table);

void				token_offset(char *line, t_fill *table);

void				get_enemy(t_fill *table, int u, t_cord *lst);

void				best_place(t_fill *table, int x, int y);

void				position(t_fill *table, int x, int y, int n);

void				find_place(t_fill *table, int len);

void				strategy(t_fill *table);

float				ft_rsqrt(float math);

#endif