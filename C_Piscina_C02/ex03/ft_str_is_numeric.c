/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 01:01:49 by almanuel          #+#    #+#             */
/*   Updated: 2023/12/31 01:22:03 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			*str++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	char	str[] = "analdo";

	printf("%d\n", ft_str_is_numeric(str));
	return (0);
}
