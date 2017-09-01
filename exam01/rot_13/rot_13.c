/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 18:54:47 by exam              #+#    #+#             */
/*   Updated: 2017/08/18 19:10:08 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1)
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(i != '\0')
	{
		ft_putchar(i);
		i++;
	}
}

int	main(argc, **argv)
{
	char	test;

	test = "cheval";
	
