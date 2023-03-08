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
