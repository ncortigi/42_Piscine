/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncortigi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:26:30 by ncortigi          #+#    #+#             */
/*   Updated: 2022/07/20 15:54:44 by ncortigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	char	c;
	int		carattere;
	int		i;

	carattere = 1;
	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (carattere == 1 && c > 96 && c < 122)
			str[i] = str[i] - 32;
		else if (carattere == 0 && c > 64 && c < 91)
		{
			str[i] = str[i] + 32;
			carattere = 1;
		}
		if (c < 48 || (c > 57 && c < 65) || c > 122 || (c > 90 && c < 97))
			carattere = 1;
		else
			carattere = 0;
		i++;
	}
	return (str);
}
