/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncortigi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:15:57 by ncortigi          #+#    #+#             */
/*   Updated: 2022/07/16 19:59:22 by ncortigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	riga;
	int	colonna;

	if (x < 1 || y < 1)
		return ;
	riga = 1;
	while (riga <= y)
	{
		colonna = 1;
		while (colonna <= x)
		{
			if ((riga == 1 && colonna == 1) || (riga == y && colonna == 1))
				ft_putchar(65);
			else if ((riga == 1 && colonna == x) || (colonna == x && riga == y))
				ft_putchar(67);
			else if (riga == 1 || colonna == 1 || riga == y || colonna == x)
				ft_putchar(66);
			else
				ft_putchar(32);
			colonna++;
		}
		ft_putchar(10);
		riga++;
	}
}
