/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bantunes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 10:55:54 by bantunes          #+#    #+#             */
/*   Updated: 2017/08/10 11:14:26 by bantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

/*
** boucle chiffres
*/

void	ft_print_numbers(void)
{
	char i;

	i = '1';
	while (i <= '9')
	{
		ft_putchar(i);
		i++;
	}
}
