/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 23:42:33 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/20 11:43:12 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	i = -1;
	tab = 0;
	if (malloc((max - min) * sizeof(int)) != NULL)
		tab = malloc((max - min) * sizeof(int));
	else
		return (tab);
	while (++i < max - min)
		tab[i] = i + min;
	return (tab);
}
