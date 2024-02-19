/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 23:53:00 by almanuel          #+#    #+#             */
/*   Updated: 2024/02/08 00:30:02 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	unsigned int	r;

	r = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		r *= nb;
		power--;
	}
	return (r);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_power(3, 5));
}*/
