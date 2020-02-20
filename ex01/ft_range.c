/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 23:42:33 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/20 15:09:06 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	i = -1;
	if ((int*)malloc((max - min) * sizeof(int)) != (void*)0)
		tab = (int*)malloc((max - min) * sizeof(int));
	else
		return ((void*)0);
	while (++i < max - min)
		tab[i] = i + min;
	return (tab);
}
