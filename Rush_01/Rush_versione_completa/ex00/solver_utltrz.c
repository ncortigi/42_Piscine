/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utltrz.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aferrign <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:11:13 by aferrign          #+#    #+#             */
/*   Updated: 2022/07/24 20:11:15 by aferrign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	reset(int *arr, int size, int initial);
int		next_perm(int s_n, int f_n, int *curr_c);
int		control_valid(int tab[4][4], int border[4][4], int inp[4][4]);
void	ft_putstr(char *str);

int	prm_utl(int tab[4][4], int border[4][4], int inp[4][4])
{
	while (1 == 1)
	{	
		if (control_valid(tab, border, inp))
			return (1);
		if (next_perm(1, 4, tab[3]))
			break ;
	}
	return (0);
}

int	perms(int tab[4][4], int border[4][4], int inp[4][4])
{
	while (1 == 1)
	{
		reset(tab[1], 4, 1);
		while (1 == 1)
		{
			reset(tab[2], 4, 1);
			while (1 == 1)
			{
				reset(tab[3], 4, 1);
				if (prm_utl(tab, border, inp))
					return (1);
				if (next_perm(1, 4, tab[2]))
					break ;
			}
			if (next_perm(1, 4, tab[1]))
				break ;
		}
		if (next_perm(1, 4, tab[0]))
			break ;
	}
	return (0);
}

int	ft_short_check(int i, char *args, int j, int inp[4][4])
{
	while (i < 31)
	{		
		if (i % 2 == 1 && args[i] == ' ')
		{
			i++;
			continue ;
		}	
		else if (i % 2 == 0 && (args[i] == '1' || args[i] == '2'))
		{
			inp[j / 4][j % 4] = args[i] - 48;
			j++;
		}
		else if (i % 2 == 0 && (args[i] == '3' || args[i] == '4'))
		{
			inp[j / 4][j % 4] = args[i] - 48;
			j++;
		}
		else
		{
			return (1);
		}
		i++;
	}
	return (0);
}
