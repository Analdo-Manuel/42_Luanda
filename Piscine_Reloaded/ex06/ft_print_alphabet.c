/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 23:55:22 by almanuel          #+#    #+#             */
/*   Updated: 2024/04/24 00:10:46 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	c;

	c = 96;
	while (c++ < 122)
		ft_putchar(c);
}
/*
int	main(void)
{
	ft_print_alphabet();
	ft_putchar('\n');
	return (0);
}*/
