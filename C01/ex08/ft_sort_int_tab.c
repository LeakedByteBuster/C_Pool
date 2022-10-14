/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:24:24 by mfouadi           #+#    #+#             */
/*   Updated: 2021/07/05 16:07:21 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int		store;

	store = *a;
	*a = *b;
	*b = store;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		k;

	i = 0;
	while (i < size - 1)
	{
		k = 0;
		while (k < size - i - 1)
		{
			if (tab[k] > tab[k + 1])
			{
				swap(&tab[k], &tab[k + 1]);
			}
			k++;
		}
		i++;
	}	
}
