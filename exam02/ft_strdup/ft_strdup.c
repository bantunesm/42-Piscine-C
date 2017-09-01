/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 20:57:27 by exam              #+#    #+#             */
/*   Updated: 2017/08/25 20:57:35 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char    *ft_strdup(char *src)
{
	char	*dest;
	int	index;

	index = 0;
	if (!(dest=(char*)malloc(sizeof(char)*ft_strlen(src)+1)))
		return((void*)0);
	while (src[index])
	{
		dest[index] = src[index];
		++index;
	}
	dest[index] = '\0';
	return(dest);
}
