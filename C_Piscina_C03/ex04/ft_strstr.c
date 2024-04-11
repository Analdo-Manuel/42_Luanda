/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 22:33:46 by almanuel          #+#    #+#             */
/*   Updated: 2024/04/03 22:34:00 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != *to_find)
		i++;
	j = i;
	while (*to_find)
	{
		if (*to_find != str[i])
			return (0);
		i++;
		to_find++;
	}
	return (str + j);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("Original: %s\n", av[1]);
	printf("Resultado:%s\n", ft_strstr(av[1], av[2]));
	return (0);
}*/
