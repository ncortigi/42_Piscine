/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncortigi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:11:02 by ncortigi          #+#    #+#             */
/*   Updated: 2022/07/19 19:12:06 by ncortigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	char	c;
	int		i;
	int		output;

	output = 1;
	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c < 97 || c > 122)
		{
			output = 0;
		}
		i++;
	}
	return (output);
}
