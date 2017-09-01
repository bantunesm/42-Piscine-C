/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bantunes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 23:01:10 by bantunes          #+#    #+#             */
/*   Updated: 2017/08/10 09:58:43 by bantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

/*
** boucle alphabet via correspondance ascii
*/

void	ft_print_alphabet(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		ft_putchar(i);
		i++;
	}
	ft_putchar('\n');
}
