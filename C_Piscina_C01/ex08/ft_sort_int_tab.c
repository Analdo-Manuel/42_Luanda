/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:57:33 by almanuel          #+#    #+#             */
/*   Updated: 2023/12/30 22:01:31 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	inicio;
	int	tmp;
	int	a;

	inicio = 0;
	while (inicio < size)
	{
		a = inicio + 1;
		while (a < size)
		{
			if (tab[inicio] > tab[a])
			{
				tmp = tab[inicio];
				tab[inicio] = tab[a];
				tab[a] = tmp;
			}
			a++;
		}
		inicio++;
	}
}
/*
int	main(void)
{
	int	v[] = {2, 4, 3, 7, 7, 1, 9, -9};
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
