/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 20:18:01 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/20 20:51:17 by lsuardi          ###   ########.fr       */
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
	arr[k] = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		stock;
	char	*tab;

	i = -1;
	stock = 0;
	tab = 0;
	while (++i < size)
	{
		j = 0;
		while (j < ft_strlen(strs[i]))
		{
			stock++;
			j++;
		}
	}
	if (malloc(stock + (i - 1) * ft_strlen(sep) + 1) != NULL)
		tab = (char*)malloc(stock + (i - 1) * ft_strlen(sep) + 1);
	else
		return ((void*)0);
	if (size == 0)
		return (tab);
	ft_strcatarr(size, strs, tab, sep);
	return (tab);
}
