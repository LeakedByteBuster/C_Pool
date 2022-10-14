/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 20:13:01 by mfouadi           #+#    #+#             */
/*   Updated: 2021/07/11 21:42:44 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	count_src(char	*src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		index++;
	}
	return (index);
}

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned	int	size)
{	
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size - 1 && size != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count_src(src));
}
