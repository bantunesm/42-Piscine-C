/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bantunes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 23:23:29 by bantunes          #+#    #+#             */
/*   Updated: 2017/08/27 23:23:30 by bantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_head.h"

int		eval_expr(char *str)
{
	t_btree		*root;
	int			resultat;

	resultat = 0;
	str = ft_trim_space(str);
	root = btree_create_node(str);
	parse(root);
	resultat = calculate_parse(root);
	return (resultat);
}
