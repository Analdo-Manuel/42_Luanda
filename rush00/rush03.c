/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 22:25:30 by almanuel          #+#    #+#             */
/*   Updated: 2024/01/22 19:25:06 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush3(int x, int y)
{
	int	ix;
	int	iy;

	iy = 0;
	while (++iy <= y)
	{
		ix = 0;
		while (++ix <= x)
		{
			if ((ix == 1 && iy == 1) || (ix == 1 && iy == y))
				ft_putchar('A');
			else if ((ix == x && iy == 1) || (ix == x && iy == y))
				ft_putchar('C');
			else if (ix > 1 && iy > 1 && ix < x && iy < y)
				ft_putchar(' ');
			else
				ft_putchar('B');
		}
		ft_putchar('\n');
	}
}
