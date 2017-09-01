/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_head.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bantunes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 23:24:17 by bantunes          #+#    #+#             */
/*   Updated: 2017/08/27 23:24:19 by bantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_HEAD_H
# define MY_HEAD_H
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	char			*value;
}				t_btree;
t_btree			*btree_create_node(void *value);
char			*ft_trim_space(char *str);
char			*ft_get_first(char *str, int i);
char			*ft_get_last(char *str, int i);
char			*ft_get_op(char *str, int i);
void			create_node(char *str, int i, t_btree *node);
char			*remove_par(char *str);
char			*check_par(char *str);
void			parse(t_btree *node);
int				ft_str_is_numeric(char *str);
int				calculate(int a, char *op, int b);
int				calculate_parse(t_btree *node);
int				ft_strlen(char *str);
int				ft_atoi(char *str);
char			*first_neg(char *str);
int				eval_expr(char *str);
void			ft_putnbr(int nbr);
void			ft_putchar(char c);

#endif
