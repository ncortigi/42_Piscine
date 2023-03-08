/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncortigi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:15:23 by ncortigi          #+#    #+#             */
/*   Updated: 2022/07/19 19:18:02 by ncortigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	char	c;
	int		i;
	int		output;

	output = 1;
	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c < 65 || c > 90)
		{
			output = 0;
		}
		i++;
	}
	return (output);
}
