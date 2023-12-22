/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 20:07:30 by almanuel          #+#    #+#             */
/*   Updated: 2023/12/22 21:02:18 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_loop(int n, int cont, int atual, int *v)
{
	int	i;

	i = 0;
	if (atual == n)
	{
		while (i < n)
		{
			ft_putchar(v[i] + '0');
			i++;
		}
		if (v[0] < (10 - n))
		{
			write(1, ", ", 2);
		}
	}
	while (cont < 10)
	{
		v[atual] = cont;
		ft_loop(n, cont + 1, atual + 1, v);
		cont++;
	}
}

void	ft_print_combn(int n)
{
	int	v[9];

	if (n > 0 && n < 10)
	{
		v[n];
		ft_loop(n, 0, 0, v);
	}
}

int	main(void)
{
	ft_print_combn(1);
	return (0);
}
