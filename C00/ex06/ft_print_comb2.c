/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 21:19:07 by mfouadi           #+#    #+#             */
/*   Updated: 2021/07/01 11:38:21 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = -1;
	while (++a < 99)
	{
		b = a;
		while (++b <= 99)
		{
			ft_putchar((a / 10) + '0');
			ft_putchar((a % 10) + '0');
			ft_putchar(' ');
			ft_putchar((b / 10) + '0');
			ft_putchar((b % 10) + '0');
			if (b != 99 || a != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}	
	}
}
