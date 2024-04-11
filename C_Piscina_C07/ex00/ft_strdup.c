/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 23:55:55 by almanuel          #+#    #+#             */
/*   Updated: 2024/02/27 00:34:52 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	str = (char *) malloc(21 * sizeof(char));
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[20] = "Ola Mundo -1";

	printf("%s\n", ft_strdup(str));
	return (0);
}*/
