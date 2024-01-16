/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanuel <analdomanuel18@cadent.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:28:15 by almanuel          #+#    #+#             */
/*   Updated: 2024/01/16 00:00:45 by almanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	i;
	int	a;
	char		v[100];
	char		*v1;

	i = 0;
	v1 = (char *)addr;
	a = snprintf(v, sizeof(v), "%p: ", addr);
	if (size > 0)
	{
		write(1, v, a);
		a = 1;
		while (i < size)
		{
			if (v1[i] > 31 && v1[i] < 126)
			{
				ft_putchar("0123456789abcdef"[v1[i] / 16]);
				ft_putchar("0123456789abcdef"[v1[i] % 16]);
				if(i == a)
				{
					write(1, " ", 1);
					a += 2;
				}
			}
			i++;
		}
		write(1, v1, size);
		ft_putchar('\n');
	}
}

int	main(void)
{
	char	v[100] = "Bonjour les amin";
	char	v1[100] = "ches...c est fo";
	char	v2[100] = "u.tout.ce qu on";
	char	v3[100] = "	..lol.lol. .	";

	//printf("%s\n e %p\n", &v, (void *)&v);
	ft_print_memory(v, sizeof(v));
	ft_print_memory(v1, sizeof(v1));
	ft_print_memory(v2, sizeof(v2));
	ft_print_memory(v3, sizeof(v3));
	return (0);
}
