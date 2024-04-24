/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 22:54:36 by almanuel          #+#    #+#             */
/*   Updated: 2024/04/24 23:39:50 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	v;

	v = nb;
	if (v < 0 || v > 15)
		return (0);
	if (v == 0 || v == 1)
		return (1);
	while (v-- > 1)
		nb *= v;
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 5;
	printf("factorial de %d: %d\n", nb, ft_iterative_factorial(nb));
	return (0);
}*/
