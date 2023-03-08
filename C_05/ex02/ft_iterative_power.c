/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncortigi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:21:05 by ncortigi          #+#    #+#             */
/*   Updated: 2022/08/02 14:06:26 by ncortigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ris;

	ris = nb;
	if (power == 0 || (power == 0 && nb == 0))
		return (1);
	if (power < 0)
		return (0);
	while (power >= 2)
	{
		ris *= nb;
		power--;
	}
	return (ris);
}
