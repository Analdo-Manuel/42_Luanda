/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 00:34:18 by almanuel          #+#    #+#             */
/*   Updated: 2024/01/23 10:08:07 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	str1[50] = "analdo";
	char	str2[50] = "Analdo";

	printf("Resultado: %d\n", ft_strcmp(str1, str2));
	printf("Original: %d\n", strcmp(str1, str2));
	return (0);
}*/
