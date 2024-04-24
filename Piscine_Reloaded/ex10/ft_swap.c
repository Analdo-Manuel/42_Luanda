/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 00:29:05 by almanuel          #+#    #+#             */
/*   Updated: 2024/04/24 22:29:19 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

/*
#include <stdio.h>

int	main(void)
{
	int	a[5] = {1, 3, 5, 7, 9};
	int	b[5] = {0, 2, 4, 6, 8};
	int 	i = 0;

	while (i < 5)
	{
	//	ft_swap(&a[i], &b[i]);
		printf("%d, %d, ", a[i], b[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
