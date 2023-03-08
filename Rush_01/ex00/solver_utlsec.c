/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utlsec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aferrign <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:10:43 by aferrign          #+#    #+#             */
/*   Updated: 2022/07/24 20:10:45 by aferrign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_short_check(int i, char *args, int j, int inp[4][4]);

void	gen_border_up1(int size, int tab[size][size], int border[size][size])
{
	int	i;
	int	j;
	int	max[1];
	int	count[1];

	i = 0;
	while (i < size)
	{
		count[0] = 0;
		max[0] = 0;
		j = 0;
		while (j < size)
		{
			if (tab[i][j] > max[0])
			{
				max[0] = tab[i][j];
				count[0]++;
			}
			j++;
		}
		border[2][i] = count[0];
		i++;
	}
}

void	gen_border_up2(int size, int tab[size][size], int border[size][size])
{
	int	i;
	int	j;
	int	max[2];
	int	count[2];

	i = 0;
	while (i < size)
	{
		count[1] = 0;
		max[1] = 0;
		j = 0;
		while (j < size)
		{
			if (tab[j][i] > max[1])
			{
				max[1] = tab[j][i];
				count[1]++;
			}
			j++;
		}
		border[0][i] = count[1];
		i++;
	}
}

void	gen_border_dw1(int size, int tab[size][size], int border[size][size])
{
	int	i;
	int	j;
	int	max[1];
	int	count[1];

	i = size - 1;
	while (i >= 0)
	{
		count[0] = 0;
		max[0] = 0;
		j = size - 1;
		while (j >= 0)
		{
			if (tab[i][j] > max[0])
			{
				max[0] = tab[i][j];
				count[0]++;
			}
			j--;
		}
		border[3][i] = count[0];
		i--;
	}
}

void	gen_border_dw2(int size, int tab[size][size], int border[size][size])
{
	int	i;
	int	j;
	int	max[2];
	int	count[2];

	i = size - 1;
	while (i >= 0)
	{
		count[1] = 0;
		max[1] = 0;
		j = size - 1;
		while (j >= 0)
		{
			if (tab[j][i] > max[1])
			{
				max[1] = tab[j][i];
				count[1]++;
			}
			j--;
		}
		border[1][i] = count[1];
		i--;
	}
}

int	check_args(int size, int inp[size][size], char **args)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(args[1]) == 31)
	{
		if (ft_short_check(i, args[1], j, inp))
			return (1);
	}
	else
	{
		return (1);
	}
	return (0);
}
