/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 21:13:13 by almanuel          #+#    #+#             */
/*   Updated: 2024/01/13 19:43:11 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c, int n)
{
	write(1, c, n);
	if (!(c[0] == '9' - n + 1))
		write(1, ", ", 2);
}

void	actualizar(int i, int n, char *v)
{
	int	c;

	c = i;
	while (c++ < n)
		v[c] = v[c - 1] + 1;
}

void	ft_print_combn(int n)
{
	char	v[10];
	int		i;

	i = 0;
	if (n > 0 && n < 10)
	{
		while (i < n)
		{
			v[i] = '0' + i;
			i++;
		}
		while (i >= 0)
		{
			ft_putchar(v, n);
			i = n - 1;
			while (i >= 0 && v[i] == '9' - n + i + 1)
				i--;
			if (i >= 0)
			{
				v[i]++;
				actualizar(i, n, v);
			}
		}
	}
}

/*
int	main(void)
{
	ft_print_combn(1);
	return (0);
}*/
