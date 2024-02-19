/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 19:04:57 by almanuel          #+#    #+#             */
/*   Updated: 2024/02/06 19:10:32 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = "42 Luanda";

	ft_putstr(str);
	return (0);
}*/
