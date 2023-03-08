/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_reader.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncortigi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:30:35 by ncortigi          #+#    #+#             */
/*   Updated: 2022/07/31 20:19:13 by ncortigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_count_bytes(char *path)
{
	int	len;
	char	byte[1];
	int	fd;

	len = 0;
	fd = open(path, O_RDONLY);
	while (read(fd, byte, 1))
		len++;
	close(fd);
	return (len);
}

char	*ft_read_file(char *path)
{
	int	bytes;
	int	fd;
	char	*string;

	bytes = ft_count_bytes(path);
	string = (char *) malloc(bytes * sizeof(char));
	fd = open(path, O_RDONLY);
	read(fd, string, bytes);
	close(fd);
	return (string);
}

int	parse_dict(char *path, struct s_voce **arr)
{
	int	i;
	char	*str;

	i = 0;
	str = ft_read_file(path);
	while (str[i] >= '0' && str[i] <= '9')
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != ' ')
				return (-1);
		i++;
	}
	while (str[i] == ' ')
		i++;
	if (str[i] != ':')
		return (-1);
	else
	{
		i++;
		while (str[i] == ' ')
			i++;
		if (str[i] < 32 || str[i] == 127)
			return (-1);
	}
}
