/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 00:25:16 by almanuel          #+#    #+#             */
/*   Updated: 2023/12/31 01:02:22 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z' || *str >= 'a' && *str <= 'z')
			*str++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "Anu el";
	int	a;

	a = ft_str_is_alpha(str);
	printf("%d\n", a);
	return (0);
}
*/
