/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funzione_1_perm.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncortigi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:06:41 by ncortigi          #+#    #+#             */
/*   Updated: 2022/07/24 18:06:44 by ncortigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	funzione_1(int is, int i, int lnt, int *curr_c)
{
	int	p;

	p = i + 1;
	while (p < lnt)
	{
		if (curr_c[i] < curr_c[p] && is > curr_c[p])
			is = curr_c[p];
		p++;
	}
	return (is);
}

void	funzione_2(int s_n, int f_n, int i, int *curr_c)
{
	int	lnt;
	int	p_1;
	int	find;
	int	p_0;
	
	lnt = f_n - s_n + 1;
	p_0 = s_n
	while (p_0 <= f_n && i < lnt)
	{
		p_1 = 0;
		find = 0;
		while (p_1 <= i)
		{
			if (p_0 == curr_c[p_1])
			{
				find = 1;
				break ;
			}		
			p_1++;
		}
		if (find == 1)
		{
			p_0++;
			continue ;
		}
		else
		{
			i++;
			curr_c[i] = p_0;
			p_0 = s_n;
		}
		p_0++;
	}	
}
