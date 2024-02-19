/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:55:00 by almanuel          #+#    #+#             */
/*   Updated: 2024/02/06 21:37:12 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	v;

	s = 1;
	i = 0;
	v = 0;
	while (str[i] == 9 || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		v = v * 10 + (str[i] - '0');
		i++;
	}
	return (s * v);
}

int	main(int ac, char *av[])
{
	(void)ac;
	printf("%d\n", ft_atoi(av[1]));
	return (0);
}
