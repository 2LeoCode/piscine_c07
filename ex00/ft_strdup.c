/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 23:23:33 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/13 23:35:06 by lsuardi          ###   ########.fr       */
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
	char *newstr;
	int i;

	newstr = malloc(ft_strlen(src));
	i = -1;
	while (src[++i])
		newstr[i] = src[i];
	return (newstr);
}
