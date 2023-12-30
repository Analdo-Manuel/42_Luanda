/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 23:31:52 by almanuel          #+#    #+#             */
/*   Updated: 2023/12/31 00:08:35 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	str0[] = "42 Porto";
	char	str1[] = "42 Luanda";

	printf("%s\n", str0);
	ft_strcpy(str0, str1);
	printf("%s\n", str0);
	return (0);
}
*/
