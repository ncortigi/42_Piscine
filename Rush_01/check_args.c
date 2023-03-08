/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncortigi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:13:52 by ncortigi          #+#    #+#             */
/*   Updated: 2022/07/24 19:14:15 by ncortigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_short_check(int i, char **args, int j)
{
	while (i < 31)
	{		
		if (i % 2 == 1 && args[1][i] == ' ')
		{
			i++;
			continue ;
		}	
		else if (i % 2 == 0 && (args[1][i] == '1' || args[1][i] == '2'))
		{
			inp[j / 4][j % 4] = args[1][i] - 48;
			j++;
		}
		else if (i % 2 == 0 && (args[1][i] == '3' || args[1][i] == '4'))
		{
			inp[j / 4][j % 4] = args[1][i] - 48;
			j++;
		}
		else
		{
			ft_putstr("Error\n");
			return (1);
		}
		i++;
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
		ft_short_check(i, args[1][i], j);
	}
	else
	{
		ft_putstr("Error\n");
		return (1);
	}
	return (0);
}
