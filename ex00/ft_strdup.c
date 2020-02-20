/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 23:23:33 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/20 11:06:17 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		continue;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*newstr;
	int		i;

	newstr = 0;
	if (malloc(ft_strlen(src)) != NULL)
		newstr = malloc(ft_strlen(src) + 1);
	else
		return (newstr);
	i = -1;
	while (src[++i])
		newstr[i] = src[i];
	newstr[i] = 0;
	return (newstr);
}
