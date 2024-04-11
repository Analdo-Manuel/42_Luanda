/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:32:27 by almanuel          #+#    #+#             */
/*   Updated: 2024/02/28 09:35:41 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*num;
	int	i;
	int	size;

	size = max - min;
	num = (int *) malloc(size * sizeof(int));
	i = 0;
	if (min >= max || !num)
		return (NULL);
	else
	{
		while (i < size)
		{
			num[i] = min;
			i++;
			min++;
		}
		return (num);
	}
}

/*
int	main(int ac, char *av[])
{
	int	*a;
	int 	i;
	int	min;
	int	max;

	(void)ac;
	i = 0;
	min = atoi(av[1]);
	max = atoi(av[2]);
	a = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d ", a[i]); 
		i++;
	}
	putchar('\n');
	return (0);
}
*/
