/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:38:49 by almanuel          #+#    #+#             */
/*   Updated: 2024/03/05 23:06:43 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	a;
	int	b;
	int	c;
	char		*str;

	str = (char *) malloc(size * sizeof(char));
	i = 0;
	a = 1;
	while (i < size)
	{
		b = 0;
		while (strs[a][b])
		{
			str[i] = strs[a][b];
			i++;
			b++;
		}
		c = 0;
		if (strs[a + 1] && i < size)
		{
			while (sep[c])
			{
				str[i] = sep[c];
				i++;
				c++;
			}
		}
		a++;
	}
	str[i] = '\0';
	return (str);
}

int	main(int ac, char **av)
{
	char	*r;
	char	*sep = ", ";
	int	size;

	size = sizeof(av) / sizeof(av[0]);
	r = ft_strjoin(10, av, sep);
	printf("%s\n", r);
	free(r);
	return (0);
}
