/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncortigi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 20:18:37 by ncortigi          #+#    #+#             */
/*   Updated: 2022/07/19 20:18:40 by ncortigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	print_array(int nb)
{
	int	array[10];
	int	i;

	i = 0;
	while (nb >= 10)
	{
		array[i] = nb % 10;
		nb /= 10;
		i++;
	}
	if (nb < 10)
		array[i] = nb % 10;
	while (i >= 0)
	{
		ft_putchar(array[i] + 48);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar(45);
			nb = -nb;
		}
		if (nb < 10)
			ft_putchar(nb + 48);
		else if (nb >= 10)
		{
			print_array(nb);
		}
	}
}
