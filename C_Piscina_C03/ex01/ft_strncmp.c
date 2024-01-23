/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:13:55 by almanuel          #+#    #+#             */
/*   Updated: 2024/01/23 10:22:56 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (!(s1[i] == s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str1[50] = "anAldo";
	char	str2[50] = "analDo";
	int		i;

	i = 2;
	printf("Resultado: %d\n", ft_strncmp(str1, str2, i));
	printf("Original: %d\n", strncmp(str1, str2, i));
	return (0);
}*/
