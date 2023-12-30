/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 22:53:46 by almanuel          #+#    #+#             */
/*   Updated: 2023/12/23 23:10:20 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int *a, int *b, int *div, int *mod);

void	ft_div_mod(int *a, int *b, int *div, int *mod)
{
	*div = *a / *b;
	*mod = *a % *b;
}

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 5;
	b = 10;
	ft_div_mod(&a, &b, &div, &mod);
	printf("Divisao: %d\nModo: %d\n", div, mod);
	return (0);
}
