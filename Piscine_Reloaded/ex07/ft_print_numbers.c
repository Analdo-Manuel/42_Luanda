/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 00:04:47 by almanuel          #+#    #+#             */
/*   Updated: 2024/04/24 00:09:02 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	c;

	c = 47;
	while (c++ < 57)
		ft_putchar(c);
}
/*
int	main(void)
{
	ft_print_numbers();
	ft_putchar('\n');
	return (0);
}*/
