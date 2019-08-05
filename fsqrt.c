/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fsqrt.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 10:10:36 by oorlov            #+#    #+#             */
/*   Updated: 2019/08/01 10:10:49 by oorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

float			ft_rsqrt(float math)
{
	long		i;
	float		x2;
	float		y;
	float		threehalfs;

	threehalfs = 1.5F;
	x2 = math * 0.5F;
	y = math;
	i = *(long *)&y;
	i = 0x5f3759df - (i >> 1);
	y = *(float *)&i;
	y = y * (threehalfs - (x2 * y * y));
	return (1 / y);
}
