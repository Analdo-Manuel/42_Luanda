/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 01:45:10 by almanuel          #+#    #+#             */
/*   Updated: 2023/12/31 01:55:05 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
			*str++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	char	str[] = "\n";

	printf("%d\n", ft_str_is_printable(str));
	return (0);
}
*/
