/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 20:57:28 by almanuel          #+#    #+#             */
/*   Updated: 2024/01/22 19:26:42 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush0(int x, int y);
void	rush1(int x, int y);
void	rush2(int x, int y);
void	rush3(int x, int y);
void	rush4(int x, int y);
void	ft_putchar(char c);

int	main(void)
{
	rush3(5, 3);
	ft_putchar('\n');
	rush3(5, 1);
	ft_putchar('\n');
	rush3(1, 1);
	ft_putchar('\n');
	rush3(1, 5);
	ft_putchar('\n');
	rush3(4, 4);
	return (0);
}
