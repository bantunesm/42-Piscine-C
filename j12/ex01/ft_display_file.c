/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bantunes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 16:11:37 by bantunes          #+#    #+#             */
/*   Updated: 2017/08/24 23:04:26 by bantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 4096

void	ft_display_file(char *argv)
{
	int		i;
	int		fd;
	char	buf[BUF_SIZE + 1];
	int		buf_size;

	fd = open(argv, O_RDONLY);
	if (fd == -1)
		write(2, "open() failed", 13);
	else
	{
		buf_size = read(fd, buf, BUF_SIZE);
		i = 0;
		while (i < buf_size)
		{
			write(1, &buf[i], 1);
			i++;
		}
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		if (argc < 2)
			write(2, "File name missing.\n", 19);
		if (argc > 2)
			write(2, "Too many arguments.\n", 20);
		return (1);
	}
	ft_display_file(argv[1]);
	return (0);
}
