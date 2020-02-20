/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 21:52:12 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/17 22:48:58 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v')
		return (1);
	if (c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int nb;
	int neg;

	i = 0;
	nb = 0;
	while (ft_isspace(str[i]))
		i++;
	i--;
	while (str[++i] == '+' || str[i] == '-')
		if (str[i] == '-')
			neg++;
	if (neg % 2 == 0)
		neg = -1;
	else
		neg = 1;
	i--;
	if (str[i] >= '0' && str[i] <= '9')
		nb = str[i] - 48;
	while (str[++i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += str[i] - 48;
	}
	return (nb * neg);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int nb = ft_atoi(nbr);

	return (nbr);
}
