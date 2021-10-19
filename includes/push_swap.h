/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:17:32 by mleam             #+#    #+#             */
/*   Updated: 2021/10/15 02:35:38 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "../libft/libft.h"

void	swap(t_list **lst);
void	ss(t_list **lst_a, t_list **lst_b);
void	rotate(t_list **lst);
void	rr(t_list **lst_a, t_list **lst_b);
void	rev_rotate(t_list **lst);
void	rrr(t_list **lst_a, t_list **lst_b);
void	push(t_list **lst_srcs, t_list **lst_dest);
int		arg_is_sorted(int ac, char **av);
int		stack_is_sorted(t_list **lst);
void	sort_min(t_list **stack_a);
void	sort_three(t_list **stack_a);
void	push_b(t_list **stack_a, t_list **stack_b);
void	push_from_b(t_list **stack_a, t_list **stack_b, int size_b);
void	sort_four(t_list **stack_a, t_list **stack_b);
void	sort_five(t_list **stack_a, t_list **stack_b);
void	sort_other(t_list **stack_a, t_list **stack_b);
void	push_a_index_max(t_list **stack_a, t_list **stack_b, int index_max);
void	rot_or_rev_pos(t_list **stack_b);
void	stack_one_index(t_list *lst, t_list *elem);
t_list	*stack_all_index(t_list **lst);
int		def_index_int_max(int size_max);
int		search_pos_max_index(t_list **stack_b);
void	rotate_x(t_list **stack_b);
void	rev_rotate_x(t_list **stack_b);
void	parsing(t_list **stack_a, t_list **stack_b, int size);
int		check_double(int ac, char **av);
int		check_is_no_digit(int ac, char **av);
int		check_integer(int ac, char **av);
int		parsing_error(int ac, char **av);
void	result_error(int ac, char **av);
void	free_all(t_list *lst);

#endif
