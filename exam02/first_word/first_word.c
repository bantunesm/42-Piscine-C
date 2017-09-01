/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 19:45:12 by exam              #+#    #+#             */
/*   Updated: 2017/08/25 19:45:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	display_word(char *str)
{
	char *first;
	int i;

	i = 0;
	first = &str[i];
	while (str[i] != '\0')
	{
		if (str[i] >= 33 && str[i] <= 126)
		{
			if (str[i + 1] >= 33 && str[i + 1] <= 126)
				first = &str[i + 1];
		}
		i++;
	}
	if (first)
		ft_putstr(first);
}

int	main(int argc, char **argv)
{

	if (argc == 2)
		display_word(argv[1]);
	ft_putchar('\n');
	ft_putstr("test");
	
	return (0);
}