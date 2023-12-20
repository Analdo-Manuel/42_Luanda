/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphebat.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analdo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:51:36 by analdo            #+#    #+#             */
/*   Updated: 2023/12/19 18:56:18 by analdo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}

void	ft_complexo(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
	ft_complexo();
	write(1, "\n", 1);
	return (0);
}
