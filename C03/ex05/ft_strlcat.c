/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 17:28:36 by mfouadi           #+#    #+#             */
/*   Updated: 2021/07/14 11:31:56 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlen(char	*dest)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	k;
	unsigned int	j;
	unsigned int	z;

	i = 0;
	k = 0;
	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	i = ft_strlen(dest);
	j = ft_strlen(dest);
	z = ft_strlen(src);
	while (src[k] != '\0' && i < size - 1)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (j + z);
}
