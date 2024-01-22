/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:05:30 by almanuel          #+#    #+#             */
/*   Updated: 2024/01/22 10:08:15 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush0(int x, int y)
{
	int	ix;
	int	iy;

	iy = 0;
	while (++iy <= y)
	{
		ix = 0;
		while (++ix <= x)
		{
			if ((ix == 1 && iy == 1) || (ix == x && iy == y))
				ft_putchar('o');
			else if ((ix == 1 && iy == y) || (iy == 1 && ix == x))
				ft_putchar('o');
			else if ((ix < x && iy == 1) || (iy == y))
				ft_putchar('-');
			else if ((iy < y && ix == 1) || (ix == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
