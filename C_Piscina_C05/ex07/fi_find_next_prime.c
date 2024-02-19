/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fi_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 21:31:45 by almanuel          #+#    #+#             */
/*   Updated: 2024/02/08 23:52:36 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 1;
	if (nb < 3)
		return (2);
	while (++i < nb)
	{
		if (nb % i == 0)
		{
			nb++;
			i = 1;
		}
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_find_next_prime(3));
	return (0);
}*/
