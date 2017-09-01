/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bantunes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 23:23:12 by bantunes          #+#    #+#             */
/*   Updated: 2017/08/27 23:23:15 by bantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_head.h"

int		calculate(int a, char *op, int b)
{
	if (op[0] == '+')
		return (a + b);
	if (op[0] == '-')
		return (a - b);
	if (op[0] == '*')
		return (a * b);
	if (op[0] == '/')
		return (a / b);
	if (op[0] == '%')
		return (a % b);
	return (0);
}

int		calculate_parse(t_btree *node)
{
	int a;
	int b;
	int res;

	if (node)
	{
		if (ft_str_is_numeric(node->value))
			return (ft_atoi(node->value));
		else
		{
			a = calculate_parse(node->left);
			b = calculate_parse(node->right);
			res = calculate(a, node->value, b);
			return (res);
		}
	}
	return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int result;

	i = 0;
	neg = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\r' ||
			str[i] == '\v' || str[i] == '\t' || str[i] == '\f')
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	result = result * neg;
	return (result);
}
