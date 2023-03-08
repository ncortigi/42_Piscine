/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncortigi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:32:45 by ncortigi          #+#    #+#             */
/*   Updated: 2022/07/19 15:08:38 by ncortigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	numero;

	i = 0;
	size--;
	while (i < size)
	{
		numero = tab[i];
		tab[i] = tab[size];
		tab[size] = numero;
		i++;
		size--;
	}
}
