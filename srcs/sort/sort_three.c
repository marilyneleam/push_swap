/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 04:19:57 by mleam             #+#    #+#             */
/*   Updated: 2021/10/15 00:25:32 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_three(t_list **stack_a)
{
	int	max_index;

	max_index = ft_lstsize(*stack_a) - 1;
	if (!stack_is_sorted(stack_a))
	{
		if ((*stack_a)->index == max_index)
		{
			rotate(stack_a);
			ft_putstr_fd("ra\n", 1);
		}
		else if ((*stack_a)->next->index == max_index)
		{
			rev_rotate(stack_a);
			ft_putstr_fd("rra\n", 1);
		}
	}
	if (!stack_is_sorted(stack_a))
	{
		swap(stack_a);
		ft_putstr_fd("sa\n", 1);
	}
	*stack_a = stack_all_index(stack_a);
}
