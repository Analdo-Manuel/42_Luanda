/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 21:58:01 by almanuel          #+#    #+#             */
/*   Updated: 2024/01/02 23:27:48 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	q;
	unsigned int	i;

	q = 0;
	i = 0;
	while (src[q] != '\0')
	{
		q++;
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (q);
}
/*
int	main(void)
{
	unsigned int	i;
	char			str1[] = "12345";
	char			str2[] = "Brazil";

	i = ft_strlcpy(str1, str2, sizeof(str1));
	printf("%s\nsize: %d\n", str1, i);
	return (0);
}
*/
