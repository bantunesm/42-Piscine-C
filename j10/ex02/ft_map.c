/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bantunes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 12:20:12 by bantunes          #+#    #+#             */
/*   Updated: 2017/08/22 18:37:40 by bantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *tableaufinal;

	i = 0;
	tableaufinal = (int*)malloc(sizeof(*tab) * length);
	while (i < length)
	{
		tableaufinal[i] = f(tab[i]);
		i++;
	}
	return (tableaufinal);
}
