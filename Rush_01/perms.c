/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perms.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncortigi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:15:36 by ncortigi          #+#    #+#             */
/*   Updated: 2022/07/24 19:20:47 by ncortigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	reset(int *arr, int size, int initial);
int		next_perm(int s_n, int f_n, int *curr_c);
int		control_valid(int tab[4][4], int border[4][4], int inp[4][4]);

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
