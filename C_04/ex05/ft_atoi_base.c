/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncortigi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:13:57 by ncortigi          #+#    #+#             */
/*   Updated: 2022/08/01 18:35:38 by ncortigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i;
		while (base[++j])
		{
			if (base[i] == base[j])
				return (0);
		}
		i++;
	}
	if (i == 1)
		i = 0;
	return (i);
}

int	ft_converter(char *str, int lbase)
{
	int	sum;
	int	i;

	i = 0;
	sum = 0;
	while ((str[i] > 47 && str[i] < 58) && str[i])
	{
		sum = sum * lbase + (str[i] - 48);
		i++;
	}
	return (sum);
}

int	ft_atoi_base(char *str, char *base)
{
	char	*strr;
	int		i;
	int		lbase;
	int		meno;
	int		numero;

	meno = 1;
	i = 0;
	lbase = check_base(base);
	if (!lbase)
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
		{
			meno *= -1;
		}
		i++;
	}
	numero = ft_converter(&str[i], lbase);
	return (numero * meno);
}
