/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:57:33 by almanuel          #+#    #+#             */
/*   Updated: 2023/12/30 22:02:06 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	inicio;
	int	tmp;

	inicio = 0;
	while (inicio < size)
	{
		if (tab[inicio] > tab[inicio + 1])
		{
			tmp = tab[inicio];
			tab[inicio] = tab[inicio + 1];
			tab[inicio + 1] = tmp;
			inicio = 0;
		}
		else
			inicio++;
	}
}
/*
int	main(void)
{
	int	v[] = {-10, 10, 7, 8, 9, 6, 3, 4, 5, 9, 0, 1, 2};
	int	i;
	int	size = sizeof(v) / sizeof(v[0]);

	i = 0;
	while (i < size)
	{
		printf("%d, ", v[i]);
		i++;
	}
	printf("\n");
	i = 0;
	ft_sort_int_tab(v, size);
	while (i < size)
	{
		printf("%d, ", v[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
