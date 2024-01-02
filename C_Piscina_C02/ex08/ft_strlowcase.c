/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 01:57:12 by almanuel          #+#    #+#             */
/*   Updated: 2023/12/31 02:18:48 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		*str++;
	}
	*str == '\0';
	return (str);
}

/*
int	main(int ac, char *av[])
{
	(void)ac;

	ft_strupcase(av[1]);
	printf("%s\n", av[1]);
	return (0);
}
*/
