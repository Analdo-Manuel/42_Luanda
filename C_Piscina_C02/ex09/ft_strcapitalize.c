/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 02:20:09 by almanuel          #+#    #+#             */
/*   Updated: 2024/01/02 21:48:30 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[i] -= 32;
		if (str[i] == 32 || str[i] == 43 || str[i] == 45)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}
*/
