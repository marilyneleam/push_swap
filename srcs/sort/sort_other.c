/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_other.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 04:43:27 by mleam             #+#    #+#             */
/*   Updated: 2021/10/14 07:52:00 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	push_a_index_max(t_list **stack_a, t_list **stack_b, int index_max)
{
	int	size_a;

	size_a = ft_lstsize(*stack_a);
	while (size_a)
	{
		if ((*stack_a)->index >= 0 && (*stack_a)->index <= index_max)
		{
			push(stack_a, stack_b);
			ft_putstr_fd("pb\n", 1);
		}
		else
		{
			rotate(stack_a);
			ft_putstr_fd("ra\n", 1);
		}
		size_a--;
	}
	*stack_a = stack_all_index(stack_a);
}

void	rot_or_rev_pos(t_list **stack_b)
{
	int	size;
	int	pos_max;

	pos_max = search_pos_max_index(stack_b);
	size = ft_lstsize(*stack_b);
	if (pos_max < size / 2)
		rotate_x(stack_b);
	else
		rev_rotate_x(stack_b);
}

void	sort_other(t_list **stack_a, t_list **stack_b)
{
	int	size_a;
	int	size_b;

	size_a = ft_lstsize(*stack_a);
	while (size_a)
	{
		push_a_index_max(stack_a, stack_b, def_index_int_max(size_a));
		size_a--;
	}
	size_b = ft_lstsize(*stack_b);
	while (size_b)
	{
		rot_or_rev_pos(stack_b);
		if ((*stack_b)->index == ft_lstsize(*stack_b) - 1)
		{
			push(stack_b, stack_a);
			ft_putstr_fd("pa\n", 1);
		}
		*stack_b = stack_all_index(stack_b);
		size_b--;
	}
	push(stack_b, stack_a);
	ft_putstr_fd("pa\n", 1);
	*stack_a = stack_all_index(stack_a);
}
