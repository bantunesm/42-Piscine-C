/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bantunes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 22:52:38 by bantunes          #+#    #+#             */
/*   Updated: 2017/08/17 23:12:56 by bantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		longueur;
	char	*str;

	longueur = 0;
	while (src[longueur])
		longueur++;
	str = (char*)malloc(sizeof(*str) * (len + 1));
	i = 0;
	while (i < longueur)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
