/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 23:45:06 by almanuel          #+#    #+#             */
/*   Updated: 2023/12/30 22:04:13 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	fim;
	int	inicio;
	int	tmp;

	fim = size - 1;
	inicio = 0;
	while (inicio <= fim)
	{
		tmp = tab[fim];
		tab[fim] = tab[inicio];
		tab[inicio] = tmp;
		inicio++;
		fim--;
	}
}
/*
int	main(void)
{
	int	i;
	int	v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	i = 0;
	while (i < 5)
	{
		printf("%d, ", v[i]);
		i++;
	}
	printf("\n");
	i = 0;
	ft_rev_int_tab(v, 5);
	while (i < 5)
	{
		printf("%d, ", v[i]);
		i++;
	}
	return (0);
}
*/
