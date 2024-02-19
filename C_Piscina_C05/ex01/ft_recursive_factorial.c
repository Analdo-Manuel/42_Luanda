/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 22:59:13 by almanuel          #+#    #+#             */
/*   Updated: 2024/02/07 23:44:28 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
		r = nb * ft_recursive_factorial(nb - 1);
	return (r);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(7));
	return (0);
}*/
