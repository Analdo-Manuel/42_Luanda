/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:57:31 by almanuel          #+#    #+#             */
/*   Updated: 2024/02/01 17:52:44 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	int	j;
	int	h;

	i = 0;
	j = 0;
	if (to_find[0] != '\0')
	{
		while (str[i] != *to_find)
		{
			i++;
		}
		h = i;
		while (to_find[j] != '\0')
		{
			if (to_find[j] != str[i])
				return ('\0');
			j++;
			i++;
		}
		j = 0;
		while (str[h] != '\0')
		{
			to_find[j] = str[h];
			h++;
			j++;
		}
		to_find[j] = '\0';
		return (to_find);
	}
	else
		return ('\0');
}
 
int main(void)
{
   char *psResultado;
   char sFrase[] = "isto e um teste";
   char a[] = "te";
 
   /* A função retornará o endereço correspondente à localização do "to" */
   psResultado = ft_strstr(sFrase, a);
   printf("Texto original:%s\nTexto alterado:%s\n", sFrase, psResultado );
   return 0;
}
