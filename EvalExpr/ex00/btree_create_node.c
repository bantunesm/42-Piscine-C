/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bantunes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 23:22:55 by bantunes          #+#    #+#             */
/*   Updated: 2017/08/27 23:22:59 by bantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_head.h"

t_btree		*btree_create_node(void *value)
{
	t_btree	*tree;

	tree = (t_btree*)malloc(sizeof(t_btree));
	if (tree)
	{
		tree->left = 0;
		tree->right = 0;
		tree->value = value;
	}
	return (tree);
}
