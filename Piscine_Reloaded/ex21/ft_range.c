/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:17:56 by almanuel          #+#    #+#             */
/*   Updated: 2024/04/29 19:45:52 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	range = (int *) malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*r;
	int	i;

	i = 0;
	r = ft_range(50, 1000);
	while (i < (1000 - 50))
	{
		printf("%d, ", r[i]);
		i++;
	}
	putchar('\n');
	return (0);
}*/
