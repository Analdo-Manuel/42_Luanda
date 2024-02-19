/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 00:34:56 by almanuel          #+#    #+#             */
/*   Updated: 2024/02/08 00:41:05 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	r;

	r = 1;
	if (power < 0)
		return (0);
	if (power > 0)
		r = nb * ft_recursive_power(nb, power - 1);
	return (r);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_power(2, 5));
	return (0);
}*/
