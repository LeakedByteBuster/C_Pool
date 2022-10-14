/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 10:38:46 by mfouadi           #+#    #+#             */
/*   Updated: 2021/07/14 14:30:06 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	lowcase_alphabet(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	lowcase_alphabet(str);
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 64)
			|| (str[i] >= 91 && str[i] <= 96 )
			|| (str[i] >= 123 && str[i] <= 127))
			str[i] = str[i];
		else if ((str[i - 1] >= 0 && str[i - 1] <= 47)
			|| (str[i - 1] >= 58 && str[i - 1] <= 64)
			|| (str[i - 1] >= 91 && str[i - 1] <= 96 )
			|| (str[i - 1] >= 123 && str[i - 1] <= 127))
			str[i] -= 32;
		i++;
	}
	return (str);
}
