/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:37:56 by almanuel          #+#    #+#             */
/*   Updated: 2024/02/07 21:19:57 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	erro(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) > 1)
	{
		while (base[i])
		{
			j = i + 1;
			while (base[j])
			{
				if (base[i] != base[j])
					j++;
				else
					return (0);
			}
			if (base[i] == 43 || base[i] == 45 || base[i] == 32)
				return (0);
			i++;
		}
		return (1);
	}
	else
		return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	bit;

	bit = ft_strlen(base);
	if (erro(base) == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
		}
		if (nbr >= bit)
		{
			ft_putnbr_base(nbr / bit, base);
			ft_putnbr_base(nbr % bit, base);
		}
		if (nbr < bit)
			ft_putchar(base[nbr]);
	}
}
/*
int	main(void)
{
	char	str[] = "01234567";

	ft_putnbr_base(10, str);
	ft_putchar('\n');
	return (0);
}*/
