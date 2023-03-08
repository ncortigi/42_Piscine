/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncortigi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:40:57 by ncortigi          #+#    #+#             */
/*   Updated: 2022/08/01 12:25:37 by ncortigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
			if (base[i] == base [j])
				return (0);
		}
		i++;
	}
	if (i == 1)
		i = 0;
	return (i);
}

void	ft_putnbr(int nbr, int lbase, char *base)
{
	long	n;
	int		i;
	int		arr_nbr[32];

	n = nbr;
	i = 0;
	if (n < 0)
	{
		ft_putchar(45);
		n = -n;
	}
	while (n)
	{
		arr_nbr[i++] = n % lbase;
		n = n / lbase;
	}
	while (--i >= 0)
		ft_putchar(base[arr_nbr[i]]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	lbase;

	lbase = check_base(base);
	if (!lbase)
		return ;
	ft_putnbr(nbr, lbase, base);
}

int main()
{
	//char b1[] = "0123456789";
	//char b2[] = "012345678+";
	//char b3[] = "0123-456789";
	//char b4[12];
	char b5[] = "0123456789abcdef";
	//char b6[] = "01234rpr";
	//char b7[] = "pony";
	//char b8[] = "ponyPONY";
	//char b9[] = "NYny";
	//char b10[] = "01";
         
         ft_putnbr_base(502334, b5);
        // ft_putnbr_base(-502334, b7);
        // ft_putnbr_base(-2147483648, b1);
 }
