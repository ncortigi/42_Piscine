/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncortigi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:47:20 by ncortigi          #+#    #+#             */
/*   Updated: 2022/07/17 12:11:16 by ncortigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	riga;
	int	colonna;

	if (y < 1 || x < 1)
		return ;
	riga = 1;
	while (riga <= y)
	{
		colonna = 1;
		while (colonna <= x)
		{
			if ((riga >= 2 && colonna >= 2) && (riga < y && colonna < x))
				ft_putchar(32);
			else if ((riga == 1 || riga == y) && (colonna < x && colonna > 1))
				ft_putchar(45);
			else if ((colonna == 1 || colonna == x) && (riga < y && riga > 1))
				ft_putchar(124);
			else
				ft_putchar(111);
			colonna++;
		}
		ft_putchar(10);
		riga++;
	}
}
