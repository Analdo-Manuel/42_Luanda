/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 22:35:28 by almanuel          #+#    #+#             */
/*   Updated: 2024/02/07 22:54:39 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_interative_factorial(int nb)
{
	unsigned int	r;

	r = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		r = r * nb;
		nb--;
	}
	return (r);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;

	i = ft_interative_factorial(0);
	printf("%d\n", i);
	return (0);
}*/
