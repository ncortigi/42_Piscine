/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncortigi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:12:14 by ncortigi          #+#    #+#             */
/*   Updated: 2022/07/27 17:23:27 by ncortigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_converter(char *str)
{
	int	sum;
	int	i;

	i = 0;
	sum = 0;
	while ((str[i] > 47 && str[i] < 58) && str[i])
	{
		sum = sum * 10 + (str[i] - 48);
		i++;
	}
	return (sum);
}

int	ft_atoi(char *str)
{
	int	i;
	int	meno;

	i = 0;
	meno = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
		{
			meno *= -1;
		}
		i++;
	}
	return (ft_converter(&str[i]) * meno);
}
