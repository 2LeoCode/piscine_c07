/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 20:18:01 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/17 20:59:07 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcatarr(int size, char **tdarr, char *arr, char *sep)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (j < ft_strlen(tdarr[i]))
		{
			arr[k] = tdarr[i][j];
			j++;
			k++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			arr[k] = sep[j];
			j++;
			k++;
		}
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		stock;
	char	*tab;

	i = 0;
	stock = 0;
	if (size < 0)
		return (1);
	while (i < size)
	{
		j = 0;
		while (j < ft_strlen(strs[i]))
		{
			stock++;
			j++;
		}
		i++;
	}
	tab = (char*)malloc(stock);
	ft_strcatarr(size, strs, tab, sep);
	return (tab);
}
