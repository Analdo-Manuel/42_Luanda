/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 22:32:07 by almanuel          #+#    #+#             */
/*   Updated: 2024/04/24 22:44:59 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int	main(void)
{
	int div, mod = 0;

	ft_div_mod(11, 2, &div, &mod);
	printf("divisão: %d\nModulo: %d\n", div, mod);
	return (0);
}*/
