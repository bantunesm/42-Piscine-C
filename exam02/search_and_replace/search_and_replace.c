/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 20:23:47 by exam              #+#    #+#             */
/*   Updated: 2017/08/25 20:24:33 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

void	search_and_replace(char **argv)
{
	int i;
	i = 0;

	if (ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
	{
		while (argv[1][i] == argv[2][0])
		{
			argv[1][i] = argv[3][0];
		}
		write(1, &argv[1][i], 1);
		i++;
	}
}

int	main (int argc, char **argv)
{
	if (argc == 4)
		search_and_replace(argv);
	write(1, "\n", 1);
	return (0);
}