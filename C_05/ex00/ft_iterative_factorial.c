/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncortigi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:11:46 by ncortigi          #+#    #+#             */
/*   Updated: 2022/08/02 11:08:04 by ncortigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ris;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	ris = nb;
	while (nb > 1)
	{
		ris = ris * (nb - 1);
		nb--;
	}
	return (ris);
}	
