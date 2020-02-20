/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:33:11 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/20 11:00:05 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdlib.h>

void	ft_recurs_job(int *tab, int min, int max, int k)
{
	if (!tab[k])
		return ;
	else
	{
		tab[k] = min;
		ft_recurs_job(tab, min + 1, max, k + 1);
	}
}

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;

	if (min >= max)
	{
		range = 0;
		return (0);
	}
	if (min < 0 && max > INT_MAX + min)
		return (-1);
	tab = (int*)malloc(sizeof(int) * (max - min));
	ft_recurs_job(tab, min, max, 0);
	return (max - min);
}
