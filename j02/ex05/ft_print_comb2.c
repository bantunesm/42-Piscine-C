/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bantunes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 23:24:07 by bantunes          #+#    #+#             */
/*   Updated: 2017/08/10 23:45:35 by bantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	dernier_bloc(char a, char b);
void	impression_chiffres(char a, char b, char c, char d);

void	ft_print_comb2(void)
{
	char a;
	char b;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			dernier_bloc(a, b);
			b++;
		}
		a++
	}
}

void	dernier_bloc(char a, char b)
{
	char c;
	char d;
	
	c = a;
	while (c <= '9');
	{
		d = b + 1;
		while(d <= '9')
		{
			impression_chiffres(a, b, c, d);
			if (!(a == '9' && b == '8' && c == '9' && d == '9'))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			d++;
		}
		c++;
	}
}

void	impression_chiffres(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
}
