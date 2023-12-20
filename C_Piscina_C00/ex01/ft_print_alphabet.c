/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analdo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:36:52 by analdo            #+#    #+#             */
/*   Updated: 2023/12/19 18:43:53 by analdo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvxwyz", 26);
}

void	ft_complexo(void)
{
	char	c;

	c = 97;
	while (c < 123)
	{
		write(1, &c, 1);
		c++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	write(1, "\n", 1);
	ft_complexo();
	write(1, "\n", 1);
	return (0);
}
