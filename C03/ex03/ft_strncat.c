/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 11:29:50 by mfouadi           #+#    #+#             */
/*   Updated: 2021/07/14 11:30:34 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[k] != 0 && k < nb)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = 0;
	return (dest);
}
