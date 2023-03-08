/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funct2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aferrign <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:09:53 by aferrign          #+#    #+#             */
/*   Updated: 2022/07/24 20:09:55 by aferrign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	utlprm(int s_n, int *curr_c, int *i0, int *i1)
{
	*i0 = *i0 + 1;
	curr_c[*i0] = *i1;
	*i1 = s_n;
}

void	nxtprm_utl(int s_n, int f_n, int *curr_c, int i[4])
{
	int	f;

	i[1] = s_n;
	while (i[1] <= f_n && i[0] < i[3])
	{
		i[2] = 0;
		f = 0;
		while (i[2] <= i[0])
		{
			if (i[1] == curr_c[i[2]])
			{
				f = 1;
				break ;
			}		
			i[2]++;
		}
		if (f == 1)
		{
			i[1]++;
			continue ;
		}
		else
			utlprm(s_n, curr_c, &i[0], &i[1]);
		i[1]++;
	}
}

int	next_perm(int s_n, int f_n, int *curr_c)
{
	int	i[4];
	int	is_incr;

	i[3] = f_n - s_n + 1;
	is_incr = f_n + 1;
	i[0] = i[3] - 2;
	while (i[0] >= 0)
	{
		i[1] = i[0] + 1;
		while (i[1] < i[3])
		{
			if (curr_c[i[0]] < curr_c[i[1]] && is_incr > curr_c[i[1]])
				is_incr = curr_c[i[1]];
			i[1]++;
		}
		if (is_incr != f_n + 1)
			break ;
		i[0]--;
	}
	if (is_incr == f_n + 1)
		return (1);
	curr_c[i[0]] = is_incr;
	nxtprm_utl(s_n, f_n, curr_c, i);
	return (0);
}
