/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aferrign <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:13:38 by aferrign          #+#    #+#             */
/*   Updated: 2022/07/23 13:13:41 by aferrign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	ft_putchar(char c);
int		next_perm(int s_n, int f_n, int *curr_c);
int		ft_strlen(char *str);
int		cmp_border(int size, int inp[size][size], int border[size][size]);
void	reset(int *arr, int size, int initial);
int		check_valid(int size, int tab[size][size]);
void	debug(int size, int tab[size][size]);
void	gen_border_up1(int size, int tab[size][size], int border[size][size]);
void	gen_border_up2(int size, int tab[size][size], int border[size][size]);
void	gen_border_dw1(int size, int tab[size][size], int border[size][size]);
void	gen_border_dw2(int size, int tab[size][size], int border[size][size]);
int		check_args(int size, int inp[size][size], char **args);
int		perms(int tab[4][4], int border[4][4], int inp[4][4]);

void	gen_border_up(int size, int tab[size][size], int border[size][size])
{
	gen_border_up1(size, tab, border);
	gen_border_up2(size, tab, border);
}

void	gen_border_dw(int size, int tab[size][size], int border[size][size])
{
	gen_border_dw1(size, tab, border);
	gen_border_dw2(size, tab, border);
}

void	gen_border(int size, int tab[size][size], int border[size][size])
{
	gen_border_up(size, tab, border);
	gen_border_dw(size, tab, border);
}

int	control_valid(int tab[4][4], int border[4][4], int inp[4][4])
{
	if (check_valid(4, tab))
	{
		gen_border(4, tab, border);
		if (cmp_border(4, inp, border))
		{
			debug(4, tab);
			return (1);
		}
	}
	return (0);
}

// Restituisce 1 se trova una soluzione, altrimenti restituisce 0
int	rozza_e_ignorante(char **args)
{
	int	inp[4][4];
	int	tab[4][4];
	int	border[4][4];

	if (check_args(4, inp, args))
		return (0);
	reset(tab[0], 4, 1);
	return (perms(tab, border, inp));
}
