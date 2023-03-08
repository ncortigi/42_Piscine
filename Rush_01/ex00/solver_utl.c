/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aferrign <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:55:48 by aferrign          #+#    #+#             */
/*   Updated: 2022/07/24 17:55:50 by aferrign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	cmp_border(int size, int inp[size][size], int border[size][size])
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (inp[i][j] != border[i][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	reset(int *arr, int size, int initial)
{
	int	i;
	int	j;

	i = initial;
	j = 0;
	while (i < initial + size)
	{
		*(arr + j) = i;
		i++;
		j++;
	}
}

// Controlla se la soluzione trovata e' valida
int	check_valid(int size, int tab[size][size])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		while (j < size)
		{
			k = 0;
			while (k < j)
			{
				if (tab[j][i] == tab[k][i])
					return (0);
				k++;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

void	debug(int size, int tab[size][size])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			ft_putchar((char)(tab[i][j] + 48));
			if (j != 3)
				ft_putchar(' ');
			j++;
		}
		j = 0;
		ft_putchar('\n');
		i++;
	}
}
