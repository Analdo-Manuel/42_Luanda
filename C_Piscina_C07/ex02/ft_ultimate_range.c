/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 09:37:54 by almanuel          #+#    #+#             */
/*   Updated: 2024/03/01 11:08:23 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*matrix;
	int	size;

	i = 0;
	size = max - min;
	matrix = (int *) malloc(size * sizeof(int));
	if (min >= max)
	{
		matrix = NULL;
		return (0);
	}
	if (!matrix)
		return (-1);
	while (i < size)
	{
		matrix[i] = min + i;
		i++;
	}
	*range = matrix;
	return (size);
}

/*
int	main(void)
{
	int	*range;
	int	size;
	int	i;

	i = 0;
	size = ft_ultimate_range(&range, -100, 0);
	while (i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\nTamanho: %d\n", size);
	return (0);
}
*/
