/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 01:57:12 by almanuel          #+#    #+#             */
/*   Updated: 2023/12/31 02:11:20 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		*str++;
	}
	*str == '\0';
	return (str);
}

/*
int	main(void)
{
	char	str[] = "manuel analdo";

	ft_strupcase(str);
	printf("%s\n", str);
	return (0);
}
*/
