/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncortigi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:33:23 by ncortigi          #+#    #+#             */
/*   Updated: 2022/08/02 15:08:03 by ncortigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	num;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	num = 2;
	if (nb >= 2)
	{
		while (num * num <= nb && num <= 46340)
		{
			if (num * num == nb)
				return (num);
			num++;
		}
	}
	return (0);
}
