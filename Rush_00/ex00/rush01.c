/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncortigi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:28:36 by ncortigi          #+#    #+#             */
/*   Updated: 2022/07/17 11:30:41 by ncortigi         ###   ########.fr       */
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
			if ((colonna == 1 && riga == 1) || (colonna == x && riga == y))
				ft_putchar(47);
			else if ((colonna == x && riga == 1) || (colonna == 1 && riga == y))
				ft_putchar(92);
			else if (riga == 1 || riga == y || colonna == 1 || colonna == x)
				ft_putchar(42);
			else
				ft_putchar(32);
			colonna++;
		}
		ft_putchar(10);
		riga++;
	}
}
