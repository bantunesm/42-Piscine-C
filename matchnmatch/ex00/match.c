/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bantunes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 03:22:29 by bantunes          #+#    #+#             */
/*   Updated: 2017/08/20 03:22:33 by bantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2)
{
	// Si c'est vide,a savoir si on a atteint le \0
	if (!*s1 && !*s2)
		return (1);
	
	// Si le caractere s1 est egal au s2 et que s1 nest pas une etoile *
	else if (*s1 == *s2 && *s1 != '*')
		return (match(s1 + 1, s2 + 1));
	
	// Si le caractere s2 est une etoile * et s1 vaut \0, a savoir la fin de la chaine
	else if (*s2 == '*' && *s1 == '\0')
		return (match(s1, s2 + 1));
	
	// Si le caractere s2 est une etoile * et que s1 existe
	else if (*s2 == '*' && *s2 && *s1)
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	
	else
		return (0);
}

int	main(int argc, char **argv)
{
	argc = 1;
	printf("%d", match(argv[1], argv[2]));
	return (0);
}