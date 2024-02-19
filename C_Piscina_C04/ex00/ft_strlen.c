/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:26:31 by almanuel          #+#    #+#             */
/*   Updated: 2024/02/06 18:34:38 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	while (str[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char	str[] = "42 Luanda";

	printf("%d\n", ft_strlen(str));
	return (0);
}*/
