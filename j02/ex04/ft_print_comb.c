/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bantunes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 22:38:50 by bantunes          #+#    #+#             */
/*   Updated: 2017/08/10 22:57:28 by bantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

/*
** On while tant que la condition a < b < c demeure respectee.
*/

void	impression_chiffres(char a, char b, char c);
void	impression_space(void);

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				impression_chiffres(a, b, c);
				if (!(a == '7' && b == '8' && c == '9'))
				{
					impression_space();
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

void	impression_chiffres(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}

void	impression_space(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}
