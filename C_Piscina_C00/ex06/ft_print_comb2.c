/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:40:03 by almanuel          #+#    #+#             */
/*   Updated: 2023/12/20 20:25:26 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	char	v1[2];
	char	v2[2];
	int		a;
	int		b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			v1[0] = '0' + (a / 10);
			v1[1] = '0' + (a % 10);
			v2[0] = '0' + (b / 10);
			v2[1] = '0' + (b % 10);
			write(1, v1, 2);
			write(1, " ", 1);
			write(1, v2, 2);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
