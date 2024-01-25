/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:21:29 by almanuel          #+#    #+#             */
/*   Updated: 2024/01/25 09:29:31 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	while (dest[i])
		i++;
	a = 0;
	while (src[a])
	{
		dest[i + a] = src[a];
		a++;
	}
	dest[i + a] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	str1[] = "42 ";
	char	str2[] = "Luanda - school";

	ft_strcat(str1, str2);
	printf("Resultado: %s\n", str1);
	//strcat(str1, str2);
	//printf("Original: %s\n", str1);
	return (0);
}*/
