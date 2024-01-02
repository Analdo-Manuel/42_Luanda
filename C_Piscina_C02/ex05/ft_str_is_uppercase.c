/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 01:39:08 by almanuel          #+#    #+#             */
/*   Updated: 2023/12/31 01:43:12 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "AGFGA";

	printf("%d\n", ft_str_is_uppercase(str));
	return (0);
}
*/
