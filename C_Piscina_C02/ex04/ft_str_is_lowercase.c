/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 01:32:26 by almanuel          #+#    #+#             */
/*   Updated: 2023/12/31 01:37:01 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "14315";

	printf("%d\n", ft_str_is_lowercase(str));
	return (0);
}
*/
