/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:26:36 by almanuel          #+#    #+#             */
/*   Updated: 2024/01/02 21:57:02 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	q;
	unsigned int	i;

	q = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && size > 0)
		{
			dest[i] = src[i];
			i++;
			size--;
		}
	}
	dest[i] = '\0';
	return (q);
}

/*
int	main(void)
{
	unsigned int	i;
	char			str1[] = "launda";
	char			str2[] = "Benguela";

	i = ft_strlcpy(str1, str2, 6);
	printf("%s\nsize: %d\n", str1, i);
	return (0);
}
*/
